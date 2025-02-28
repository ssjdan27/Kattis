#include <bits/stdc++.h>
using namespace std;
void solve(){
    int l, n;
    cin >> l >> n;
    int biggestMin = INT_MIN;
    int biggestMax = INT_MIN;
    for(int i = 0; i < n; i++){
        int ant;
        cin >> ant;
        int left = ant;
        int right = l - ant;
        biggestMin = max(biggestMin, min(left, right));
        biggestMax = max(biggestMax, max(left, right));
    }

    cout << biggestMin << " " << biggestMax << "\n"; 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}