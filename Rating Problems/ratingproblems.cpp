#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    double currentScore = 0;
    double bestAverage = 0;
    double worstAverage = 0;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int score;
        cin >> score;
        currentScore += score;
    }

    bestAverage = (currentScore + (double) ((n - k) * 3)) / n;
    worstAverage = (currentScore + (double) ((n - k) * -3)) / n;

    printf("%.10f %.10f", worstAverage, bestAverage);
    return 0;
}
