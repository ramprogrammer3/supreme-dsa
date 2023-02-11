#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[]){
    arr[0] = arr[0] + 10;

    cout << "Printing array from inc funciont " << endl;
    printArray(arr, 3);
    
}

int main(){

    int arr[] = {2,3,5};
    inc(arr);
    cout << "Printing array from main function " << endl;
    printArray(arr, 3);

    return 0;
}