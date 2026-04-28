#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[10] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int n = 10;
    int target = 93;

    cout << "B2. Binary Search\n";

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int low = 0;
    int high = n - 1;
    int comparisons = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        comparisons++;

        cout << "Low = " << low
             << ", High = " << high
             << ", Mid = " << mid
             << ", arr[Mid] = " << arr[mid] << endl;

        if (arr[mid] == target) {
            cout << "Target " << target << " found at index " << mid << endl;
            cout << "Number of comparisons: " << comparisons << endl;
            cout << "Time complexity: O(log n)\n";
            return 0;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Target not found\n";

    return 0;
}
