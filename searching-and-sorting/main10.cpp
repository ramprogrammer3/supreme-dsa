#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int element, int start, int end)
{
    start = 0;
    end = v.size() - 1;

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

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{

    vector<int> v{4, 5, 6, 0, 1, 2, 3};

    int pivotindex = findPivot(v);
    int target = 2;

    if (target > v[0] && target <= v[pivotindex])
    {
        int ans = binarySearch(v, target, 0, pivotindex);
        cout << "The element is " << ans << endl;
    }
    else
    {
        int ans = binarySearch(v, target, pivotindex + 1, v.size() - 1);
        cout << "The element is " << ans << endl;
    }

    return 0;
}