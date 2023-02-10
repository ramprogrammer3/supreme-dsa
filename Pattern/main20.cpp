#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < n - row; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < 2 * row + 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < n - row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {

        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }

        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}