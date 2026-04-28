#include <iostream>
using namespace std;

int main() {
    int arr[10] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int n = 10;

    cout << "A1. Bubble Sort\n";
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    for (int pass = 1; pass <= 3; pass++) {
        bool swapped = false;

        for (int j = 0; j < n - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        cout << "After pass " << pass << ": ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;

        if (!swapped) {
            cout << "Early Exit: no swaps, array is already sorted.\n";
            break;
        }
    }

    cout << "Time complexity: O(n^2)\n";

    return 0;
}
