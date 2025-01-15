#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<char> uniqueCards(s.begin(), s.end());

    if(uniqueCards.size() == s.length()){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}