#include <iostream>
using namespace std;

void printAllPrime(int n)
{

    if (n >= 2)
    {
        cout << 2 << " ";
    }

    for (int i = 3; i <= n; i++)
    {
        bool flag = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
            }
        }

        if (flag == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int n;
    cout << "Enter a number to print all prime " << endl;
    cin >> n;

    printAllPrime(n);

    return 0;
}