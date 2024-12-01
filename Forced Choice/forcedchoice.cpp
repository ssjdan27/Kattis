#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int n, p, s;
    cin >> n >> p >> s;
    cin.ignore();
    for (int i = 0; i < s; i++)
    {
        string line;
        set<int> cards;
        int card;
        getline(cin, line);

        stringstream ss(line);
        bool first = true;
        while (ss >> card)
        {
            if (first)
            {
                first = false;
                continue;
            }
            cards.insert(card);
        }

        bool found = (cards.find(p) != cards.end());

        if (!found)
            cout << "REMOVE" << endl;
        else
            cout << "KEEP" << endl;
    }
    return 0;
}