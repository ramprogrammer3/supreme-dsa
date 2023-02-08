#include <iostream>
using namespace std;

void EvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even number " << endl;
    }
    else
    {
        cout << n << " is odd number " << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    EvenOrOdd(n);

    return 0;
}