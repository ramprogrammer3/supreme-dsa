#include <iostream>
using namespace std;

void print(int arr[], int size, int index)
{
    if (size == index)
        return;

    print(arr, size, index + 1);

    cout << arr[index] << " ";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    cout << "Printing array in reverse order : " << endl;
    print(arr, 5, 0);

    return 0;
}