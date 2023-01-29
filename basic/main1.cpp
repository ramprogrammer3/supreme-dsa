#include <iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){
        cout << "ram kumar " << endl;
    }

    for(int i = 0; i<5; i++){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 5; i>0; i--){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 0; i<10; i++){
        cout << 2 * i << " ";
    }
    cout << endl;

    for(int i = 0; i<=5; i = i + 2){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 1; i<=5; i= i+2){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 1; i<10; i= i *2){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 100; i>0; i = i / 2){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 5; (i>=0 && i<=10);i++){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}