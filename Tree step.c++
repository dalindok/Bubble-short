#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Display the current state of the array after each swap
                cout << "Step " << (i * (size - 1) + j + 1) << ": ";
                displayArray(arr, size);
            }
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Display the current state of the array after each swap
                cout << "Step " << (i * (size - 1) + j + 1) << ": ";
                displayArray(arr, size);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    displayArray(arr, size);

    // Ascending Order
    bubbleSortAscending(arr, size);
    cout << "\nSorted Array (Ascending): ";
    displayArray(arr, size);

    // Reset array to its original state
    int resetArr[] = {64, 34, 25, 12, 22, 11, 90};

    // Descending Order
    bubbleSortDescending(resetArr, size);
    cout << "\nSorted Array (Descending): ";
    displayArray(resetArr, size);

    return 0;
}
