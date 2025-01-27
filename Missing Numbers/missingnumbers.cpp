#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_set<int> nums;
    vector<int> missingNums;

    int lastNum;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.insert(num);
        if (i == n - 1)
        {
            lastNum = num;
        }
    }

    bool missing = false;
    for (int i = 1; i < lastNum; i++)
    {
        if (nums.find(i) == nums.end())
        {
            cout << i << "\n";
            if (!missing)
            {
                missing = true;
            }
        }
    }

    if (!missing)
    {
        cout << "good job\n";
    }

    return 0;
}