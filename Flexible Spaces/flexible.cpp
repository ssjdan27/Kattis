#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, p;
    cin >> w >> p;
    vector<int> partitions(p + 2);
    partitions[0] = 0;
    for (int i = 1; i <= p; i++) {
        cin >> partitions[i];
    }
    partitions[p + 1] = w;

    set<int> possibleWidths;

    for (int i = 0; i < p + 2; i++) {
        for (int j = 0; j < i; j++) {
            possibleWidths.insert(partitions[i] - partitions[j]);
        }
    }

    int count = 0;
    for (int width : possibleWidths) {
        if (count++ > 0) cout << " ";
        cout << width;
    }
    cout << "\n";

    return 0;
}
