#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(char first, char second){
    return first > second;
}

bool compare(int first, int second){
    return first > second;
}

int main(){

    string str = "ram kumar";
    
    sort(str.begin(), str.end());
    cout << str << endl;
    sort(str.begin(), str.end(), cmp);
    cout << str << endl;

    vector<int> v {5,3,1,2,4};

    sort(v.begin(), v.end());

    cout << "printing in ascending order " << endl;

    for(auto i : v){
        cout << i << " ";
    }

    cout << endl;

    cout << "Printing in descending order " << endl;

    sort(v.begin(), v.end(), compare);

    for(auto i : v){
        cout << i << " ";
    }

    return 0;
}