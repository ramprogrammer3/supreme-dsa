#include <iostream>
using namespace std;

int getMax(int arr[], int size, int index)
{

    if (index == size)
        return INT_MIN;
    int ans = arr[index];
    int recAns = getMax(arr, size, index + 1);
    return max(ans, recAns);
}

int main()
{

    int arr[] = {7, 2, 15, 9, 21, 18};
    int size = 6;

    int ans = getMax(arr, size, 0);
    cout << "The maximum element is " << ans << endl;

    return 0;
}