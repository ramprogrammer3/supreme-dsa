#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    cout << "printing in decreasing order : " << endl;

    print(n);

    return 0;
}