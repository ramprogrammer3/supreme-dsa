#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v{2, 4, 6, 8, 10, 12, 16};
    bool ans = binary_search(v.begin(), v.end(), 20);

    if(ans){
        cout << "Element is found " << endl;
    }else{
        cout << "Element is not found " << endl;
    }
    return 0;
}