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
void sortArray(vector<int> &arr)
{
    int zeros = 0, ones = 0, two = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            two++;
        }
    }

    while (arr.size() != 0)
    {
        arr.pop_back();
    }

    while (zeros--)
    {
        arr.push_back(0);
    }
    while (ones--)
    {
        arr.push_back(1);
    }
    while (two--)
    {
        arr.push_back(2);
    }

    cout << "Printing array element : " << endl;
    printArray(arr);
}

int main()
{

    vector<int> arr{1, 2, 0, 0, 1, 2};
    sortArray(arr);

    return 0;
}