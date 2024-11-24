#include <iostream>
using namespace std;
int main()
{
    int common = 0;
    int k;
    string first;
    string second;

    cin >> k;
    cin >> first;
    cin >> second;

    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] == second[i])
        {
            common++;
        }
    }

    if (common >= k)
    {
        cout << k + (first.length() - common);
    }
    else
    {
        cout << first.length() - k + common;
    }

    return 0;
}