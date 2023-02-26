#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool compareString(string a, string b){
    
    if(a.length() != b.length()){
        return false;
    }else{
        int j = 0;
        for(int i = 0; i<a.length(); i++){
            if(a[i] != b[j]){
                return false;
            }
            j++;
        }
    }

    return  true;
}

int main(){


    // char ch[100];
    // ch[0] = 'R';
    // ch[1] = 'a';
    // ch[2] = '\0';
    // ch[3] = 'm';
    // ch[4] = '\0';

    // int n = strlen(ch);
    // for(int i = 0; i<n; i++){
    //     cout << ch[i] << endl;
    // }

    // string str = "Ram\0 kumar";
    // cout << str << endl;


    // string str;
    // // cin >> str;

    // getline(cin, str);

    // cout << str << endl;

    string str = "ram kumar";
    string str2 = "maniyari";
    string str3 = "ram kumar ";

    cout << str.compare(str3) << endl;
    cout << str.compare(str2) << endl;
    cout << endl;

    cout << "length of string is " << str.length() << endl;
    cout << "is Empyty " << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    cout << str.substr(1,3) << endl;

    string a = "sitamarhi";
    string b = "sitamarhi";

    bool ans = compareString(a,b);
    cout << ans << endl;

    string x = "abcd";
    string y = "bcda";

    cout << x.compare(y) << endl;

    string sentence = "hello jee kaise ho sare ";
    string target = "jee";
    cout << sentence.find(target) << endl;

    string m = "This is my first message";
    string word = "Ram";

    m.replace(0,4,word);
    cout << m << endl;

    string m1 = "This is my first message ";
    cout << m1.length() << endl;
    m1.erase(5,2);
    cout << m1 << endl;
    cout << m1.length() << endl;

    return 0;
}