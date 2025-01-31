#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, f, c;
    cin >> e >> f >> c;

    int emptyBottles = e + f;
    int drank = 0;

    while (emptyBottles >= c)
    {
        int fullDrink = emptyBottles / c;
        drank += fullDrink;
        emptyBottles = fullDrink + emptyBottles % c;
    }

    cout << drank;

    return 0;
}