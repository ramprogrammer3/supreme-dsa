#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // creating vector

    vector<int> crr{10, 20, 30, 40};
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;
    cout << "verctor crr is empty or not " << crr.empty() << endl;

    vector<int> arr;
    cout << "size of vector is " << arr.size() << endl;
    cout << "capacity is " << arr.capacity() << endl;
    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;

    // insert
    arr.push_back(5);
    arr.push_back(7);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    // vector<int> brr(10);
    vector<int> brr(10, -10);
    cout << "size of brr is " << brr.size() << endl;
    cout << "Capacity of brr is " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}