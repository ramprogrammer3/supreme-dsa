#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (v[mid] < v[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }

    return s;
}

int main()
{
    vector<int> v{1, 2, 3, 10, 5, 2, 1};

    int index = peakIndex(v);

    cout << "peak index is " << index << endl;

    return 0;
}