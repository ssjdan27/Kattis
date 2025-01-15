#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const double PI = M_PI;

    while (true)
    {
        double r;
        int m, c;
        cin >> r >> m >> c;

        if (r == 0 && m == 0 && c == 0)
        {
            break;
        }

        double trueArea = r * r * PI;
        double estimate = (double (c) / m) * (r + r) * (r + r);

        cout << setprecision(11) << trueArea << " " << estimate << "\n";
    }

    return 0;
}