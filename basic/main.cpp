#include <iostream>
using namespace std;
int main(){

    int marks;
    cin >> marks;

    if(marks > 90){
        cout << "A grade" << endl;
    }else{
        cout << "Other grade ";
    }

    return 0;
}