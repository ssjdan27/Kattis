#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int numerator, denominator;
        cin >> numerator >> denominator;

        if(numerator == 0 && denominator == 0){
            break;
        }

        int whole = numerator / denominator;
        int frac = numerator % denominator;

        cout << whole << " " << frac << " / " << denominator << "\n";
    }

    return 0;
}