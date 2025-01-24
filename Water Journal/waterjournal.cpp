#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    bool minFound = false;
    bool maxFound = false;

    for (int i = 0; i < n - 1; i++)
    {
        int num;
        cin >> num;
        if (num == a)
        {
            minFound = true;
        }
        if (num == b)
        {
            maxFound = true;
        }
    }

    if (minFound && maxFound)
    {
        for (int i = a; i <= b; i++)
        {
            cout << i << "\n";
        }
    }
    else if (minFound && !maxFound)
    {
        cout << b;
    }
    else if (!minFound && maxFound)
    {
        cout << a;
    }
    else
    {
        cout << -1;
    }

    return 0;
}