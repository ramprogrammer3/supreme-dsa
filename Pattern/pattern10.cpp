#include <iostream>
using namespace std;

int main(){
    cout << "Hi ram Enter a number to print numeric pyramid:" << endl;

    int n;
    cin >> n;
    for(int row = 0; row <n; row = row + 1){
        for(int space = n - row - 1; space >0; space--){
            cout << "  ";
        }
        int count1 = row + 1;
        for(int colPart1 = row + 1; colPart1 > 0; colPart1--){
            cout << count1 << " ";
            count1 = count1 + 1;
        }
        int count2 = count1 - 2;
        for(int colPart2 = row; colPart2 > 0; colPart2--){
            cout << count2 << " ";
            count2 = count2 - 1;
        }
        cout << endl;
    }

    return 0;
}