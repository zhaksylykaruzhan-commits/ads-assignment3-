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

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];

    int i = low + 1;
    int j = high;

    while (true)
    {
        while (i <= high && arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i >= j)
        {
            break;
        }

        swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int size = 10;

    quickSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}
