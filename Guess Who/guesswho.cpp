#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;
    vector<string> characters(n);

    for (int i = 0; i < n; i++)
    {
        cin >> characters[i];
    }

    vector<pair<int, char>> mapping;
    for (int i = 0; i < q; i++)
    {
        int index;
        char c;
        cin >> index >> c;
        mapping.push_back(make_pair(index, c));
    }

    int possibleCharacters = 0;
    int indexFound = 0;
    for (int i = 0; i < n; i++)
    {
        bool allMatch = true;
        for (auto m : mapping)
        {
            if (characters[i][m.first - 1] != m.second)
            {
                allMatch = false;
                break;
            }
        }
        if (allMatch)
        {
            indexFound = i + 1;
            possibleCharacters++;
        }
    }

    if (possibleCharacters == 1)
    {
        cout << "unique\n"
             << indexFound;
    }
    else
    {
        cout << "ambiguous\n"
             << possibleCharacters;
    }

    return 0;
}