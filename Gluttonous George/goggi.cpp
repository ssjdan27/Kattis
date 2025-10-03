#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    string q;
    cin >> n >> q >> m;
    if (n > m)
        cout << ">\n";
    else if (n < m)
        cout << "<\n";
    else
        cout << "Goggi svangur!\n";
    return 0;
}