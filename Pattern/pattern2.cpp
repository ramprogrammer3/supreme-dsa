#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number to create square pattern : " << endl;
    cin >> n;

    cout << "printing square pattern " << endl << endl;

    for(int row = 0; row <n; row++){
        for(int col = 0; col <n; col++){
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}