#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int maxMin = -1;
    int minMax = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int minimum;
        int maximum;
        cin >> minimum >> maximum;
        maxMin = max(maxMin, minimum);
        minMax = min(minMax, maximum);
    }

    if (maxMin > minMax)
    {
        cout << "bad news";
    }
    else
    {
        cout << minMax - maxMin + 1 << " " << maxMin;
    }

    return 0;
}