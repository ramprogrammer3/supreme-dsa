#include <iostream>
using namespace std;

int getSumOfEven(int n)
{

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{

    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = getSumOfEven(n);
    cout << "Sum of even is " << ans << endl;

    return 0;
}