#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void mergeArrays(int arr[], int left, int mid, int right) {
    int temp[10];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < k; x++) {
        arr[left + x] = temp[x];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;

    cout << "Divide: left=" << left << ", mid=" << mid << ", right=" << right << endl;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    mergeArrays(arr, left, mid, right);

    cout << "After merge from index " << left << " to " << right << ": ";
    printArray(arr, 10);
}

int main() {
    int arr[10] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int n = 10;

    cout << "A2. Merge Sort\n";
    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Final sorted array: ";
    printArray(arr, n);

    cout << "Time complexity: O(n log n)\n";

    return 0;
}
