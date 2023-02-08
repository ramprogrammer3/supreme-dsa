#include <iostream>
using namespace std;

int main()
{

    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << "ram " << endl;
        break;
    }
    cout << "palak " << endl;

    for (int i = 0; i < n; i++)
    {

        if (i == 3)
            continue;

        cout << i << " ram " << endl;
    }

    return 0;
}