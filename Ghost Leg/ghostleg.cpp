#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> rungs(m);
    for (int i = 0; i < m; i++) {
        cin >> rungs[i];
    }

    vector<int> permutation(n);

    for (int i = 1; i <= n; i++) {
        int pos = i; 
        for (int rung : rungs) {
            if (pos == rung) {
                pos = rung + 1; 
            } else if (pos == rung + 1) {
                pos = rung; 
            }
        }
        permutation[pos - 1] = i;
    }

    for (int num : permutation) {
        cout << num << "\n";
    }

    return 0;
}
