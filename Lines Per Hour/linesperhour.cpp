#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, lph;
    cin >> n >> lph;
    vector<int> problems(n);

    int totalLines = lph * 5;

    for (int i = 0; i < n; i++)
    {
        cin >> problems[i];
    }

    sort(problems.begin(), problems.end());

    int solves = 0;
    int currLines = 0;
    for (int i = 0; i < n; i++)
    {
        if (currLines + problems[i] <= totalLines)
        {
            solves++;
            currLines += problems[i];
        }
        else
        {
            break;
        }
    }

    cout << solves;

    return 0;
}