#include <iostream>
using namespace std;

int main() {
    int arr[10] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int n = 10;

    const int M = 7;
    int hashTable[M];

    for (int i = 0; i < M; i++) {
        hashTable[i] = -1;
    }

    cout << "B1. Hashing Modulo with Linear Probing\n";

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int index = key % M;
        bool inserted = false;

        cout << "\nKey: " << key << ", h(k) = " << key << " mod 7 = " << index << endl;

        for (int step = 0; step < M; step++) {
            int newIndex = (index + step) % M;

            if (hashTable[newIndex] == -1) {
                hashTable[newIndex] = key;
                cout << "Inserted at index " << newIndex << endl;
                inserted = true;
                break;
            } else {
                cout << "Collision at index " << newIndex << endl;
            }
        }

        if (!inserted) {
            cout << "Cannot insert " << key << ". Hash table is full.\n";
        }
    }

    cout << "\nFinal Hash Table:\n";
    for (int i = 0; i < M; i++) {
        cout << "Index " << i << ": ";
        if (hashTable[i] == -1)
            cout << "Empty";
        else
            cout << hashTable[i];
        cout << endl;
    }

    cout << "\nAverage search complexity: O(1)\n";
    cout << "Worst case complexity: O(n)\n";

    return 0;
}
