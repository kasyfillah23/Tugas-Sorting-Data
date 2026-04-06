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

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        cout << "Iterasi " << i << ":" << endl;
        printArray(arr);
    }
}

int main() {
    vector<int> data = {78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6};
    
    cout << "=== INSERTION SORT ===" << endl;
    cout << "Data Awal: ";
    printArray(data);
    cout << "------------------------------" << endl;
    
    insertionSort(data);
    
    cout << "------------------------------" << endl;
    cout << "Data Hasil Sorting: ";
    printArray(data);
    
    return 0;
}