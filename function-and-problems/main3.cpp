#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three number " << endl;

    cin >> a >> b >> c;

    int ans = maxOfThree(a, b, c);

    cout << "The maximum number is " << ans << endl;
    return 0;
}