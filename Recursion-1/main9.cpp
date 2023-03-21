#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v, int s, int e, int key)
{

    // base case

    if (s > e)
        return -1;

    int m = (s + e) / 2;

    if (v[m] == key)
        return m;

    if (v[m] < key)
        return binarySearch(v, m + 1, e, key);
    else
        return binarySearch(v, s, m - 1, key);
}

int main()
{

    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80};

    int e = v.size() - 1;
    int s = 0;

    int target = 80;

    int ans = binarySearch(v, s, e, target);

    cout << "Element is at index " << ans << endl;

    return 0;
}