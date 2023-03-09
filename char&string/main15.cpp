#include <iostream>
#include <map>
using namespace std;

int main(){

    // creating a map
    map<int,char> meraMap;
    meraMap[0] = 'a';
    meraMap[1] = 'b';
    meraMap[25] = 'z';

    cout << "your ans is " <<  meraMap[23] << endl;
    cout << "your ans is " <<  meraMap[25] << endl;
    return 0;
}