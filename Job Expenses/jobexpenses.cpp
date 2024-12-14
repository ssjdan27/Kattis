#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int expenses = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < 0) {
            expenses += abs(num);
        }
    }

    cout << expenses;
    return 0;
}
