#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 3, 3, 3, 3, 3, 3, 5, 6};
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), 3);
    up = upper_bound(v.begin(), v.end(), 3);
    cout << "lower bound is " << low - v.begin() << endl;
    cout << "The upper bound is " << up - v.begin() << endl;

    return 0;
}