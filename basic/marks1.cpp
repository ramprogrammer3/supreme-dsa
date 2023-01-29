#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks : " << endl;
    cin >> marks;

    if (marks >= 90)
    {
        cout << "A grade " << endl;
    }
    else if (marks >= 80)
    {
        cout << "B grade " << endl;
    }
    else if (marks >= 60)
    {
        cout << "C grade " << endl;
    }
    else if (marks >= 40)
    {
        cout << "D grade " << endl;
    }
    else
    {
        cout << "Failed grade " << endl;
    }
    return 0;
}