#include <iostream>
using namespace std;

int main()
{
    int arr[] = {14, 51, 25, 55, 27, 80, 56, 40, 37, 93};
    int size = 10;

    const int M = 7;

    int hashTable[M];

    for (int i = 0; i < M; i++)
    {
        hashTable[i] = -1;
    }

    for (int i = 0; i < size; i++)
    {
        int index = arr[i] % M;

        int count = 0;

        while (hashTable[index] != -1 && count < M)
        {
            index = (index + 1) % M;
            count++;
        }

        if (count < M)
        {
            hashTable[index] = arr[i];
        }
    }

    for (int i = 0; i < M; i++)
    {
        cout << i << " -> " << hashTable[i] << endl;
    }

    return 0;
}
