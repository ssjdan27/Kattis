#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> twoCharSmiles = {":)", ";)"};
    vector<string> threeCharSmiles = {":-)", ";-)"};
    vector<int> addresses;
    string s;
    cin >> s;
    int n = s.length();

    for(int i = 0; i < n - 1; i++){
        string seq = string(1, s[i]);
        seq += s[i+1];
        for(string smile: twoCharSmiles){
            if(smile == seq){
                addresses.push_back(i);
                break;
            }
        }
    }

    for(int i = 0; i < n - 2; i++){
        string seq = string(1, s[i]);
        seq += s[i+1];
        seq += s[i+2];
        for(string smile: threeCharSmiles){
            if(smile == seq){
                addresses.push_back(i);
                break;
            }
        }
    }

    for(int i = 0; i < addresses.size(); i++){
        cout << addresses[i];
        if(i != addresses.size() - 1){
            cout << " ";
        }
    }

    return 0;
}