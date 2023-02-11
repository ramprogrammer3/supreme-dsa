#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 0, 0, 0, 0, 3, 1, 1, 1, 0, 3, 4, 1, 0};
    int size = 15;

    int numberOfZero = 0;
    int numberOfOne = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0)
        {
            numberOfZero++;
        }
        if (arr[i] == 1)
        {
            numberOfOne++;
        }
    }

    cout << "Number of zero = " << numberOfZero << endl;
    cout << "Number of one = " << numberOfOne << endl;

    return 0;
}