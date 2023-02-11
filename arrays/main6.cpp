#include <iostream>
using namespace std;

void extremeInArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
    }
}

int main()
{

    int arr[] = {20, 30, 40, 20, 1, 3, 5, 5, 8, -44};

    int size = 10;

    extremeInArray(arr, size);

    return 0;
}