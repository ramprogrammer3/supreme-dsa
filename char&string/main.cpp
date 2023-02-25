#include <iostream>
#include <string>
using namespace std;

int main()
{

    // char name[100];
    // cout << "Enter your name " << endl;
    // cin >> name;

    // cout << "Your name is " << name << endl;

    // taking input in char array 


    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin >> ch[2];

    // cout << ch[0] << endl;
    // cout << ch[1] << endl;
    // cout << ch[2] << endl;

    // char name[100];
    // cin >> name;

    // for(int i = 0; i<7; i++){
    //     cout << "Index " << i << " value : " << name[i] << endl;
    // }

    // int value = (int)name[6];
    // cout << "value is " << value << endl;

    char ch[100];
    cout << "Enter your name " << endl;
    // cin >> ch;
    // getline(cin,ch);
    cin.getline(ch,100);
    cout << ch << endl;

    return 0;
}