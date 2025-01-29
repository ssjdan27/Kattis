#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    double p;
    cin >> n >> k >> p;

    double expectedValue = (n * p) - k;

    if(expectedValue < 0){
        cout << "spela";
    }
    else{
        cout << "spela inte!";
    }

    return 0;
}