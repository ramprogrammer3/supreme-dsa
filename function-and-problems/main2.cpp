#include <iostream>
using namespace std;

int addTwoNumber(int a, int b){

    return a + b;
}

int main(){

    int number1, number2;

    cout << "Enter first number : " << endl;
    cin >> number1;
    cout << "Enter second number : " << endl;
    cin >> number2;

    cout << "sum is " << addTwoNumber(number1, number2) << endl;

    cout << "Addresss of number1 is " << &number1 << endl;

    return 0;
}