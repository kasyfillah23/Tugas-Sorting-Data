#include <iostream>
#include <vector>

using namespace std;

// Fungsi pembantu untuk mencetak array
void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        cout << "Iterasi " << i + 1 << ":" << endl;
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        printArray(arr);
        if (!swapped) break;
    }
}

int main() {
    vector<int> data = {78, 48, 10, 3, 36, 37, 43, 16, 34, 45, 25, 38, 72, 36, 53, 6};
    
    cout << "=== BUBBLE SORT ===" << endl;
    cout << "Jumlah Data: " << data.size() << endl;
    cout << "Data Awal: ";
    printArray(data);
    cout << "------------------------------" << endl;
    
    bubbleSort(data);
    
    cout << "------------------------------" << endl;
    cout << "Data Hasil Sorting: ";
    printArray(data);
    
    return 0;
}