#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    double minYInt = INT_MAX;
    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double slope = ((double)y2 - y1) / (x2 - x1);
        double yInt = y1 - slope * x1;

        if(yInt > 0 && ((x1 <= 0 && x2 >= 0) || (x1 >= 0 && x2 <= 0))){
            minYInt = min(minYInt, yInt);
        }
    }

    if(minYInt != INT_MAX){
        cout << setprecision(12) << minYInt;
    }
    else{
        cout << -1;
    }

    return 0;
}