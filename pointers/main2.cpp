#include <iostream>
using namespace std;

void solve(int arr[]){
    cout << sizeof(arr) << endl;
}
int main(){

    int arr[10];
    cout << sizeof(arr) << endl;
    cout << "function called here " << endl;
    solve(arr);


    // char name[10] = "sherbano";
    // char *cptr = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name + 3) << endl;
    // cout << cptr << endl;
    // cout << *cptr << endl;
    // cout << *(cptr + 3) << endl;

    // char ch = 'k';
    // char *cptr1 = &ch;
    // cout << cptr1 << endl;


    // char ch[10] = "babbar";
    // char *c = ch;
    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;
    // cout << &c << endl;
    // cout << *c << endl;
    // cout << c << endl;



    // char *c = ch;
    // cout << ch << endl;

    // int arr[4] = {12,14,16,18};

    // int arr[10];
    // cout << sizeof(arr) << endl;
    // int *p = arr;
    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;


    // int i = 0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl;
    // cout << *(arr + i) << endl;
    // cout << *(arr + ++i) << endl;
    // cout << *(arr + i + 2) << endl;

    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;


    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;


    return 0;
}