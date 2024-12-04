#include <iostream>
using namespace std;
int main()
{
    int n;
    int giftsToday = 0;
    int totalGifts = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        giftsToday += i;
        totalGifts += giftsToday;
    }

    cout << giftsToday << endl
         << totalGifts;

    return 0;
}