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

int partition(vector<int>& arr, int low, int high, int& step) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    
    step++;
    cout << "Partisi ke-" << step << " (Pivot: " << pivot << "):" << endl;
    printArray(arr);
    return (i + 1);
}

void quickSortHelper(vector<int>& arr, int low, int high, int& step) {
    if (low < high) {
        int pi = partition(arr, low, high, step);
        quickSortHelper(arr, low, pi - 1, step);
        quickSortHelper(arr, pi + 1, high, step);
    }
}

int main() {
    vector<int> data = {78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6};
    
    cout << "=== QUICK SORT ===" << endl;
    cout << "Data Awal: ";
    printArray(data);
    cout << "------------------------------" << endl;
    
    int step = 0;
    quickSortHelper(data, 0, data.size() - 1, step);
    
    cout << "------------------------------" << endl;
    cout << "Data Hasil Sorting: ";
    printArray(data);
    
    return 0;
}