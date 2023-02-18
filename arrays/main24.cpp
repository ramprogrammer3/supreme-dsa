#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void moveNegative(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;

    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}

int main()
{

    vector<int> arr{1, 2, -3, 4, -5, 6};
    moveNegative(arr);
    printArray(arr);

    return 0;
}