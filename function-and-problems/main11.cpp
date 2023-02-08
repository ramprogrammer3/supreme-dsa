#include <iostream>
using namespace std;

bool checkPrinme(int number)
{

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cout << "Enter the number to check prime " << endl;
    cin >> n;

    bool ans = checkPrinme(n);
    if (ans)
    {
        cout << "Prime " << endl;
    }
    else
    {
        cout << "Not a prime " << endl;
    }

    return 0;
}