#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

void generateValidSubsets(const string &num, int k, vector<string> &subsets, string current, int index)
{
    if (current.size() == k)
    {
        subsets.push_back(current);
        return;
    }

    for (int i = index; i < num.size(); i++)
    {
        generateValidSubsets(num, k, subsets, current + num[i], i + 1);
    }
}

bool isValidSubset(const string &code, const string &subset)
{
    int l = 0, r = 0;
    while (l < code.size() && r < subset.size())
    {
        if (code[l] == subset[r])
        {
            r++;
        }
        l++;
    }
    return r == subset.size();
}

int main()
{
    int k, n;
    vector<string> codes;
    unordered_set<string> uniqueSubsets;

    cin >> k >> n;

    int minLength = 13;
    for (int i = 0; i < n; i++)
    {
        string curr;
        cin >> curr;
        codes.push_back(curr);
        minLength = min(minLength, (int)curr.length());
    }

    vector<string> subsets;
    for (const string &code : codes)
    {
        if (code.length() == minLength)
        {
            vector<string> tempSubsets;
            generateValidSubsets(code, k, tempSubsets, "", 0);
            for (const string &subset : tempSubsets)
            {
                uniqueSubsets.insert(subset);
            }
        }
    }

    subsets.assign(uniqueSubsets.begin(), uniqueSubsets.end());

    vector<pair<string, bool>> pairedSubsets;
    for (const string &subset : subsets)
    {
        bool isValid = true;
        for (const string &code : codes)
        {
            if (!isValidSubset(code, subset))
            {
                isValid = false;
                break;
            }
        }
        pairedSubsets.push_back({subset, isValid});
    }

    sort(pairedSubsets.begin(), pairedSubsets.end());

    int validCount = 0;
    for (const auto &pair : pairedSubsets)
    {
        if (pair.second)
        {
            validCount++;
        }
    }

    cout << validCount << endl;
    for (const auto &pair : pairedSubsets)
    {
        if (pair.second)
        {
            cout << pair.first << endl;
        }
    }

    return 0;
}
