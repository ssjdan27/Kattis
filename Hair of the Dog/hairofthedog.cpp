#include <iostream>
using namespace std;
int main()
{
    int daysHungover = 0;
    int n;
    string prevAction;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prevAction;
            cin >> prevAction;
            cin.ignore();
        }
        else
        {
            string action;
            cin >> action;
            cin.ignore();
            if (prevAction == "drunk" && action == "sober")
            {
                daysHungover++;
            }
            prevAction = action;
        }
    }

    cout << daysHungover;
    return 0;
}