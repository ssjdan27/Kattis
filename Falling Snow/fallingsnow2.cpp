#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    vector<vector<char>> matrix;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string line;
        vector<char> elements;
        cin >> line;
        for (char c: line) {
            elements.push_back(c);
        }
        matrix.push_back(elements);
    }

    for (int i = 0; i < m; i++) {
        int sCount = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[j][i] == 'S') {
                matrix[j][i] = '.';
                sCount++;
            }
        }

        int j = n - 1;
        while (sCount > 0) {
            matrix[j][i] = 'S';
            j--;
            sCount--;
        }

    }

    for (const vector<char>& x : matrix) {
        for (const char c : x) {
            cout << c;
        }
        cout << "\n";
    }
    return 0;
}