#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;
    bool c = true;
    bool d = false;

    cout << (a & b) << endl;
    cout  << (a & c) << endl;
    cout << (b & d) << endl;
    cout << endl;

    cout << (true | true) << endl;
    cout << (false | false) << endl;
    cout << (true | false) << endl;

    cout << endl;

    cout << (~true) << endl;
    cout << (~false) << endl;
    cout << (~10) << endl;
    cout << (~-10) << endl;
    cout << endl;

    cout << (true ^ true) << endl;
    cout << (false ^ false) << endl;
    cout << (true ^ false) << endl;

    cout << endl;
    cout << (5 & 6) << endl;
    cout << (5 & 10) << endl;

    cout << endl;

    cout << (3 | 4) << endl;
    cout << endl << endl;

    int num = 12;
    cout << (num << 1) << endl;
    cout << (num << 2) << endl;
    cout << (num << 3) << endl;
    cout << (num << 4) << endl;

    int num1 = -12;

    cout << (num1 << 1) << endl;
    cout << (num1 << 2) << endl;
    cout << (num1 << 3) << endl;

    cout << endl << endl;

    int number = 14;
    cout << (number >> 1) << endl;
    cout << (number >> 2) << endl;
    cout << (number >> 3) << endl;
    cout << (number >> 4) << endl;
    cout << (number >> 5) << endl;

    cout << (-10 >> 1) << endl;
    cout << (-23 >> 1) << endl;

    return 0;
}