#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    unordered_set<int> learned;
    unordered_set<int> knots;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int knot;
        cin >> knot;
        knots.insert(knot);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int knot;
        cin >> knot;
        learned.insert(knot);
    }

    for (int knot : knots)
    {
        if (learned.find(knot) == learned.end())
        {
            cout << knot;
            break;
        }
    }
    return 0;
}