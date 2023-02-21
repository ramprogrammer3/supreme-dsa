#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int linearSearch(vector<int> v, int element)
{

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element)
        {
            return element;
        }
    }
    return -1;
}

int main()
{

    vector<int> v{3, 2, 1, 5, 7, 9};

    int ans = linearSearch(v, 2);

    if (ans != -1)
    {
        cout << "Element is present " << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }

    return 0;
}