#include <bits/stdc++.h>
using namespace std;

const int MOD = 10000;
const string TARGET = "welcome to code jam";

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int caseNum = 1; caseNum <= t; caseNum++) {
        string phrase;
        getline(cin, phrase);

        int m = TARGET.size();
        int n = phrase.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1; 
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = dp[i-1][j]; 
                if (phrase[i-1] == TARGET[j-1]) {
                    dp[i][j] += dp[i-1][j-1]; 
                    dp[i][j] %= MOD;
                }
            }
        }

        int result = dp[n][m];
        cout << "Case #" << caseNum << ": " << setw(4) << setfill('0') << result << "\n";
    }

    return 0;
}
