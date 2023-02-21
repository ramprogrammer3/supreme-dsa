#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    if (binary_search(arr, arr + size, 3))
    {
        cout << "found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }

    return 0;
}