#include <iostream>
using namespace std;

int main(){
    
    cout << "Hi ram enter number to print inverted pyramid " << endl;
    
    int n;
    cin >> n;

    for(int row = 0; row <n; row++){

        for(int space=0; space <row+1; space++){
            cout << " ";
        }

        for(int col = 0; col <n - row; col++){
            cout << "* ";
        }

        
        cout << endl;
    }
}