#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int partitionFirstPivot(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    cout << "Pivot = " << pivot << endl;

    while (true) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;

        if (i >= j) break;

        cout << "Swap " << arr[i] << " and " << arr[j] << endl;
        swap(arr[i], arr[j]);
    }

    cout << "Move pivot " << arr[low] << " to final position\n";
    swap(arr[low], arr[j]);

    return j;
}

int main() {
    int arr[10] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int n = 10;

    cout << "A3. Quick Sort Partition\n";
    cout << "Original array: ";
    printArray(arr, n);

    int pivotIndex = partitionFirstPivot(arr, 0, n - 1);

    cout << "Array after partition: ";
    printArray(arr, n);

    cout << "Final pivot position: index " << pivotIndex << endl;
    cout << "Time complexity average: O(n log n)\n";
    cout << "Time complexity worst case: O(n^2)\n";

    return 0;
}
