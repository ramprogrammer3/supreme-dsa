#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {2, 4, 8}};
    cout << "code running successfully " << endl;

    cout << brr[2][2] << endl;
    cout << brr[0][2] << endl;
    cout << brr[2][0] << endl;
    cout << brr[2][5] << endl;

    // row wise
    cout << "printing element is row wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // column wise

    cout << "printing element in column wise " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

    // taking input in 2d array

    int arr1[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++)
    {
        cout << "for " << i << " row " << endl;
        for (int j = 0; j < cols; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "printing row wise " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "taking input in column wise " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "for " << i << " column " << endl;
        for (int j = 0; j < cols; j++)
        {
            cin >> arr1[j][i];
        }
    }

    cout << "printing row wise " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}