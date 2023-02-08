#include <iostream>
using namespace std;

int areaOfCircle(int radius)
{

    int area = 3.14 * radius * radius;
    return area;
}

int main()
{

    int radius;
    cout << "Enter the radious of circle " << endl;
    cin >> radius;

    int area = areaOfCircle(radius);

    cout << "area of circle is " << area << endl;

    return 0;
}