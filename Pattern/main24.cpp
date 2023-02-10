#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int count = 1;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0)
            {
                cout << col + 1;
            }
            else if (row == n - 1)
            {
                if (col % 2 == 0)
                {
                    cout << count;
                    count++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}