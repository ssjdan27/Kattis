#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n) {
        if (n == 1)
            cout << "1\n";
        else
            cout << 2 * n - 2 << "\n";
    }
    return 0;
}