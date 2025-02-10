#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    stack<char> st;
    for(char c: s){
        if(c == '<'){
            st.pop();
        }
        else{
            st.push(c);
        }
    }

    string res;
    while(!st.empty()){
        char c = st.top();
        res += c;
        st.pop();
    }

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}