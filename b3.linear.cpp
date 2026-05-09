#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    int comparisons = 0;

    for (int i = 0; i < size; i++)
    {
        comparisons++;

        if (arr[i] == target)
        {
            cout << comparisons << endl;
            return i;
        }
    }

    cout  << comparisons << endl;

    return -1;
}

int main()
{
    int arr[] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int size = 10;

    int target = 56;

    int result = linearSearch(arr, size, target);

    cout << result << endl;

    return 0;
}
