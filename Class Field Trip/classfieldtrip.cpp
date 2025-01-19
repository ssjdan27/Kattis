#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string ann, ben;
    cin >> ann >> ben;

    string list = ann + ben;
    sort(list.begin(), list.end());

    cout << list;

    return 0;
}