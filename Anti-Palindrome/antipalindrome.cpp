#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalpha(c); }), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int n = s.length();
    if (n == 1) {
        cout << "Palindrome";
        return 0;
    }

    for (int len = 2; len <= n; len++) {  
        for (int start = 0; start <= n - len; start++) {  
            string text = s.substr(start, len);
            string palin = text;
            reverse(palin.begin(), palin.end());

            if (palin == text) {
                cout << "Palindrome";
                return 0;
            }
        }
    }

    cout << "Anti-palindrome";
    return 0;
}
