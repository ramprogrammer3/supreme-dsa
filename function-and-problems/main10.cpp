#include <iostream>
using namespace std;

int getFactorial(int n)
{

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{

    int n;
    cout << "Enter the number to get factorial " << endl;
    cin >> n;

    int ans = getFactorial(n);

    cout << "the factorial of " << n << " is " << ans << endl;

    return 0;
}