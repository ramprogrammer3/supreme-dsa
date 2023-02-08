#include <iostream>
using namespace std;

int main()
{

    int a = 11;
    cout << a << endl;
    cout << ++a << endl;

    cout << a++ << endl;
    cout << a << endl;
    int b = 6;
    int c = ++b + 1;
    cout << c << endl;

    int a = 6;
    int c = (a++) + 1;
    cout << c << endl;

    int a = 3;
    int b = 4;
    int c = (--a) * (b++);
    cout << c << endl;

    int a = 5;
    cout << (++a) * (++a) * (++a) << endl;

    return 0;
}