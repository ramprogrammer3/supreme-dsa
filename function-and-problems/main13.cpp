#include <iostream>
using namespace std;

int celsiusToFahrenheit(int n)
{

    int ans = (n * 9 / 5) + 32;
    return ans;
}

int main()
{

    int n;
    cout << "Enter celsius value : " << endl;
    cin >> n;

    int ans = celsiusToFahrenheit(n);
    cout << "The fahrenhiet value is : " << ans << endl;

    return 0;
}