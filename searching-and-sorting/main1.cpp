#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int element)
{
    int start = 0;
    int end = v.size() - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (v[mid] == element)
        {
            return element;
        }
        else if (v[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{

    vector<int> v{2, 4, 6, 8, 10, 12, 16};

    int ans = binarySearch(v, 16);

    if (ans)
    {
        cout << "Element " << ans << " is present " << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }

    return 0;
}