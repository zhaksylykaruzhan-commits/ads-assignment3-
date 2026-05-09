#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        printArray(arr, size);

        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int size = 10;

    bubbleSort(arr, size);

    return 0;
}
