#include <iostream>
using namespace std;

bool compareString(string a, string b)
{

    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    string a = "ram kumar";
    string b = "ram kumar";

    bool ans = compareString(a, b);

    if (ans)
    {
        cout << "String is equal" << endl;
    }
    else
    {
        cout << "string is not equal " << endl;
    }

    return 0;
}
