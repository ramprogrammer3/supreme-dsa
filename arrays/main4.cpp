#include <iostream>
using namespace std;

int getMaxInArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {20, 30, 40, 20, 1, 3, 5, 5, 8, 0};

    int size = 10;

    int ans = getMaxInArray(arr, size);

    cout << "Maximun element in array is " << ans << endl;

    return 0;
}