#include <iostream>
using namespace std;

string removeOccurences(string s, string part)
{

    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }

    return s;
}

int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";
    string ans = removeOccurences(s, part);
    cout << ans << endl;
    return 0;
}