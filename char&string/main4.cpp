#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char ch[])
{
    int i = 0;
    int j = strlen(ch) - 1;

    while (i <= j)
    {
        if (ch[i] != ch[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main()
{

    char ch[100];

    cin >> ch;

    bool ans = isPalindrome(ch);

    cout << ans << endl;

    return 0;
}