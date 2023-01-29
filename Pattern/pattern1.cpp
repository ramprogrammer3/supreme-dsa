#include <iostream>
using namespace std;

int main(){
    
    cout << "printing rectangle here " << endl;

    // outer loop for rows

    for(int row = 0; row <3; row++){

        // inner loop for column
        for(int col = 0; col < 5; col++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}