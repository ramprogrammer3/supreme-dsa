#include <iostream>
using namespace std;

int reveseInteger(int number)
{
    int ans = 0;
    int digit;

    while (number != 0)
    {
        digit = number % 10;
        ans = ans * 10 + digit;
        number = number / 10;
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter the number " << endl;

    cin >> n;

    int ans = reveseInteger(n);
    cout << "The reverse number of " << n << " is " << ans << endl;

    return 0;
}