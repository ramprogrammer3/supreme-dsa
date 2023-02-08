#include <iostream>
using namespace std;

int main(){

    // variable scoping 
    int a; // declare a variable 

    int b = 5; //initialiazation

    b = 10; // b update

    // int b = 20; // redefine

    if(true){
        int b = 10;
    }


    cout << a << endl;

    return 0;
}