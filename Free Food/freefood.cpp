#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> days(365, 0);

    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        for (int j = start - 1; j <= end - 1; j++)
        {
            days[j]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < days.size(); i++)
    {
        if (days[i] > 0)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}