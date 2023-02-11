#include <iostream>
using namespace std;

int main()
{

    // creating arrays

    // int arr[53];
    // char ch[106];
    // bool bool1[23];

    // int marks[10];
    // cout << "Array is created successfully " << endl;
    // cout << "address of marks " <<  marks << endl;
    // cout << "address of marks " <<  &marks << endl;

    // initializaion of arrays

    // int arr[] = {1,2,3,4,5};
    // int arr1[5] = {1,2,3,4,5};
    // int arr2[10] = {1,2,3,4,5};
    // // int arr3[3] = {1,2,3,4,5};

    // cout << "Array initializaion is successfully " << endl;

    // accessing array
    //
    // int arr[] = {1,3,5,7,9};

    // cout << arr[0] << endl;
    // cout << arr[4] << endl;

    // // printing all value

    // for(int i = 0; i<5; i++){
    //     cout << arr[i] << " ";
    // }

    // int arr[10];

    // cout << "Enter the value of array : ";
    // for(int i = 0; i<10; i++){
    //     cin >> arr[i];
    // }

    // cout << "printing the value of array " << endl;

    // for(int i = 0; i<10; i++){
    //     cout <<  arr[i] << " ";
    // }

    // int arr[5];

    // cout << "Enter the value of array : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "printing the value of array " << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] * 2 << " ";
    // }

    // int arr[] = {1,3,6,4,8};

    // for(int i = 0; i<5; i++){
    //     arr[i] = 1;
    // }
    // cout << "Printing elemetns of arrays : " << endl;
    // for(int i = 0; i<5; i++){
    //    cout <<  arr[i] << " ";
    // }

    int arr[10] = {1, 3};
    cout << "Printing elemetns of arrays : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr1[10] = {};
    cout << "Printing elemetns of arrays : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[10] = {0};
    cout << "Printing elemetns of arrays : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}