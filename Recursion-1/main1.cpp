#include <iostream>
using namespace std;

void solve(int n)
{

    if (n == 0)
        return;

    cout << n << " ";

    solve(n - 1);
}

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Printing in decreasing order : " << endl;

    solve(n);

    return 0;
}