#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0, 2));
        int minute = stoi(curr.substr(3, 2));
        int totalmin = hours * 60 + minute;
        minutes.push_back(totalmin);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    int lastDiff = (minutes[0] + 1440 - minutes[n - 1]);
    mini = min(mini, lastDiff);

    return mini;
}

int main()
{
    vector<string> timePoints{"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:59", "00:00"};
    // cout << timePoints.size()<< endl;

    int ans = findMinDifference(timePoints);

    cout << ans << endl;

    return 0;
}