#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n != -1)
    {
        int lastTime = -1;
        int totalTraveled = 0;
        for (int i = 0; i < n; i++)
        {
            int speed, time;
            cin >> speed >> time;
            if (lastTime != -1)
            {
                totalTraveled += speed * (time - lastTime);
            }
            else
            {
                totalTraveled += speed * time;
            }
            lastTime = time;
        }

        cout << totalTraveled << " miles\n";

        cin >> n;
    }

    return 0;
}