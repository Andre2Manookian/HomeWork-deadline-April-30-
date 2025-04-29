#include <iostream>
using namespace std;


void doubleValues(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}


void findMinMax(int* arr, int size, int& minVal, int& maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}


void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int size;


    cout << "Enter the size of the dataset: ";
    cin >> size;


    int* data = new int[size];

   
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> data[i];
    }

  
    doubleValues(data, size);

    
    int minVal, maxVal;
    findMinMax(data, size, minVal, maxVal);


    for (int i = 0; i < size; ++i) {
        if (data[i] == minVal) {
            for (int j = 0; j < size; ++j) {
                if (data[j] == maxVal) {
                    swapValues(data[i], data[j]);
                    break;
                }
            }
            break;
        }
    }

    
    cout << "\nFinal array after swapping min and max:\n";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    
    delete[] data;

    return 0;
}
