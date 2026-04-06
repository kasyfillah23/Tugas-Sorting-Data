#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { arr[k] = L[i]; i++; } 
        else { arr[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
}

void mergeSortHelper(vector<int>& arr, int left, int right, int& step) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortHelper(arr, left, mid, step);
        mergeSortHelper(arr, mid + 1, right, step);
        merge(arr, left, mid, right);
        step++;
        cout << "Proses Merge ke-" << step << ":" << endl;
        printArray(arr);
    }
}

int main() {
    vector<int> data = {78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6};
    
    cout << "=== MERGE SORT ===" << endl;
    cout << "Data Awal: ";
    printArray(data);
    cout << "------------------------------" << endl;
    
    int step = 0;
    mergeSortHelper(data, 0, data.size() - 1, step);
    
    cout << "------------------------------" << endl;
    cout << "Data Hasil Sorting: ";
    printArray(data);
    
    return 0;
}