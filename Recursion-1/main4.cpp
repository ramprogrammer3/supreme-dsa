#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v, int index, int size)
{
    if (index == size)
        return;

    cout << v[index] << " ";

    print(v, index + 1, size);
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int size = v.size();
    cout << "printing array using recursin : " << endl;
    print(v, 0, size);

    return 0;
}