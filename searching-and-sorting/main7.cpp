#include <iostream>
#include <vector>
using namespace std;
int lastOccurence(vector<int> v, int element)
{
    int start = 0;
    int end = v.size() - 1;

    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (v[mid] == element)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (v[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int firstOccurence(vector<int> v, int element)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (v[mid] == element)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (v[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main(){

    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};

    int first = firstOccurence(v, 4);
    int second = lastOccurence(v, 4);

    int total = second - first + 1;

    cout << "total number of occurence is " << total << endl;

    return 0;
}