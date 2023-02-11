#include <iostream>
using namespace std;

int getMinInArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[] = {20, 30, 40, 20, 1, 3, 5, 5, 8, -44};

    int size = 10;

    int ans = getMinInArray(arr, size);

    cout << "minimun  element in array is " << ans << endl;

    return 0;
}