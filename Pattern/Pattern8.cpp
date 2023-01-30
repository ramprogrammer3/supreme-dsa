#include <iostream>
using namespace std;

int main()
{

    cout << "Hi ram enter number to print full pyramid " << endl;

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int space = n - row - 1;

        for (int space = n - row - 1; space > 0; space--)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}