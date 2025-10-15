#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    cin >> s;
    int lowercase = 0, uppercase = 0, whitespace = 0, symbols = 0;
    for(char c: s){
        if(islower(c)) lowercase++;
        else if(isupper(c)) uppercase++;
        else if(c == '_') whitespace++;
        else symbols++;
    }

    cout << fixed << setprecision(15);
    cout << static_cast<double>(whitespace) / s.length() << "\n";
    cout << static_cast<double>(lowercase) / s.length() << "\n";
    cout << static_cast<double>(uppercase) / s.length() << "\n";
    cout << static_cast<double>(symbols) / s.length() << "\n";
    return 0;
}