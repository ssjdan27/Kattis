#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    double cheese = M_PI * (r - c) * (r - c);
    double total = M_PI * r * r;
    cout << fixed << setprecision(6) << (cheese / total) * 100 << "\n";

    return 0;
}