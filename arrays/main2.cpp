#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[] = {2, 9, 6, 7, 4, 12, 15};
    bool ans = linearSearch(arr, 7, 15);

    if (ans)
    {
        cout << "Found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }

    return 0;
}