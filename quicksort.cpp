#include<bits/stdc++.h>
using namespace std;

int qc(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low + 1 && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]); 
    return j;
}

void qs(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIdx = qc(arr, low, high);
        qs(arr, low, pivotIdx - 1);
        qs(arr, pivotIdx + 1, high);
    }
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    qs(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << " ";
    }
}
