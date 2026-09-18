#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int l,r;
    cin>>l>>r;
    double diag = l*sqrt(2);
    if(diag <= 2*r) cout<<"fits\n";
    else cout<<"nope\n";  
    return 0;
}