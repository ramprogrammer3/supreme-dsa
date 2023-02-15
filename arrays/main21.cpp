#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3};
    // vector<int> b{2, 4, 6, 10, 12};
    // vector<int> c{1, 3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> arr(3,vector<int>(5,0));
    //  for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> arr(5,vector<int>(5,-8));
      for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << arr[2][3] << endl;
    cout << "Number of row " << arr.size() << endl;
    cout << "number of column " << arr[0].size() << endl;

    return 0;
}