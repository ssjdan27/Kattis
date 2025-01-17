#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string text;
    getline(cin, text);
    stringstream ss(text);
    vector<string> words;

    string word;
    while(ss >> word){
        words.push_back(word);
    }

    vector<string> result;

    for(string w: words){
        string res;
        char lastChar = w[0];
        res += lastChar;
        for(int i = 1; i < w.length();i++){
            char currChar = w[i];
            if(lastChar != currChar){
                res += currChar;
                lastChar = currChar;
            }
        }
        result.push_back(res);
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        if(i != result.size() - 1){
            cout << " ";
        }
    }


    return 0;
}