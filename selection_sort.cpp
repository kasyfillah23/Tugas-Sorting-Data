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

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        cout << "Iterasi " << i + 1 << ":" << endl;
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
        printArray(arr);
    }
}

int main() {
    vector<int> data = {78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6};
    
    cout << "=== SELECTION SORT ===" << endl;
    cout << "Jumlah Data: " << data.size() << endl;
    cout << "Data Awal: ";
    printArray(data);
    cout << "------------------------------" << endl;
    
    selectionSort(data);
    
    cout << "------------------------------" << endl;
    cout << "Data Hasil Sorting: ";
    printArray(data);
    
    return 0;
}