#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}