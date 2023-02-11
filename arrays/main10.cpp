#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void unionOfArray(vector<int> &arr1, vector<int> &arr2, vector<int> &ans)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    unionOfArray(arr1, arr2, ans);

    print(ans);

    return 0;
}