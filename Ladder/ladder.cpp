#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h;
    int v;

    cin >> h >> v;

    double v_radians = v * M_PI / 180.0;

    cout << ceil((h / sin(v_radians)));
    return 0;
}