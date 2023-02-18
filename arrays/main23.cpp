#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort(int *arr, int size)
{
    int l = 0, m = 0, h = size - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++, m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{

    int arr[] = {1, 2, 0, 0, 1, 2};
    sort(arr, 6);
    printArray(arr, 6);
    return 0;
}