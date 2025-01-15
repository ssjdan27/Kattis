#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int maxSpeed = 0;
    cin >> n;

    int prevTime, prevDistance;
    cin >> prevTime >> prevDistance;
    n--;
    while(n--){
        int t, d;
        cin >> t >> d;

        int speed = (d - prevDistance) / (t - prevTime);
        maxSpeed = max(maxSpeed, speed);
        prevTime = t;
        prevDistance = d;
    }

    cout << maxSpeed;

    return 0;
}