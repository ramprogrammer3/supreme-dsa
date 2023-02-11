#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 0, 9, 2, 8, 1, 1, 7, 3, 5, 3, 8, 3, 5};

    int sum = 10;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "( " << arr[i] << "," << arr[j] << "," << arr[k] << " )"
                         << " ";
                }
            }
        }
    }

    return 0;
}