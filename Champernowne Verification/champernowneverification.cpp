#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string cur;
    for (int i=1;i<=10;i++) {
        cur+=to_string(i);
        if (cur==s) {
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
}