#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double width = abs(x1 - x2);
    double length = abs(y1 - y2);

    cout << (width * length);

    return 0;
}