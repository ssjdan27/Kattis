#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    int fizz = 0;
    int buzz = 0;
    int fizzbuzz = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 && i % b == 0)
            fizzbuzz++;
        else if (i % a == 0)
            fizz++;
        else if (i % b == 0)
            buzz++;
    }

    cout << fizz << " " << buzz << " " << fizzbuzz;

    return 0;
}