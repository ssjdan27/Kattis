#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int w, l;
        cin >> w >> l;
        if (w == 0 && l == 0)
        {
            break;
        }
        else
        {
            int n;
            int x = 0;
            int thinkX = 0;
            int y = 0;
            int thinkY = 0;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                char move;
                int amount;
                cin >> move >> amount;
                if (move == 'u')
                {
                    thinkY += amount;
                    if (amount + y >= l - 1)
                    {
                        y = l - 1;
                    }
                    else
                    {
                        y += amount;
                    }
                }
                else if (move == 'd')
                {
                    thinkY -= amount;
                    if (y - amount <= 0)
                    {
                        y = 0;
                    }
                    else
                    {
                        y -= amount;
                    }
                }
                else if (move == 'r')
                {
                    thinkX += amount;
                    if (amount + x >= w - 1)
                    {
                        x = w - 1;
                    }
                    else
                    {
                        x += amount;
                    }
                }
                else
                {
                    thinkX -= amount;
                    if (x - amount <= 0)
                    {
                        x = 0;
                    }
                    else
                    {
                        x -= amount;
                    }
                }
            }

            cout << "Robot thinks " << thinkX << " " << thinkY << "\n";
            cout << "Actually at " << x << " " << y << "\n\n";
        }
    }

    return 0;
}