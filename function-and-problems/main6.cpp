#include <iostream>
using namespace std;

int sumOfNumber(int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{

    int n;
    cout << "Enter the number to print sum : " << endl;
    cin >> n;

    int ans = sumOfNumber(n);

    cout << "The sum is " << ans << endl;

    return 0;
}