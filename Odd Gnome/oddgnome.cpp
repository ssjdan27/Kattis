#include <bits/stdc++.h>
using namespace std;

void solve() {
    int g;
    cin >> g;
    int gnomes[g];
    for (int i = 0; i < g; i++) {
        cin >> gnomes[i];
    }

    for (int i = 1; i < g; i++) {
        if (gnomes[i] - gnomes[i-1] != 1) {
            cout << i + 1 << "\n";
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}
