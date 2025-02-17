#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, pair<int, int>, greater<int>> freq;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        freq[num].first++;
        freq[num].second = i;
    }

    int ans = -1;

    for (auto x : freq)
    {
        if (x.second.first == 1)
        {
            ans = x.second.second;
            break;
        }
    }

    if (ans == -1)
    {
        cout << "none";
    }
    else
    {
        cout << ++ans;
    }

    return 0;
}