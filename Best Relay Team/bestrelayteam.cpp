#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, double>> firstLegTimes(n);
    vector<pair<string, double>> otherLegTimes;
    unordered_map<string, pair<double, double>> mapper;

    for(int i = 0; i < n; i++){
        string name;
        double first, other;
        cin >> name >> first >> other;
        firstLegTimes[i] = {name, first};
        otherLegTimes.push_back({name, other});
        mapper[name] = {first, other};
    }

    sort(firstLegTimes.begin(), firstLegTimes.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    sort(otherLegTimes.begin(), otherLegTimes.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    double ans = DBL_MAX;
    vector<string> bestTeam;

    for (int i = 0; i < n; i++) {
        double currentTime = firstLegTimes[i].second;
        vector<string> currentTeam = {firstLegTimes[i].first};

        for (int j = 0, count = 0; j < n && count < 3; j++) {
            if (otherLegTimes[j].first != firstLegTimes[i].first) {
                currentTime += otherLegTimes[j].second;
                currentTeam.push_back(otherLegTimes[j].first);
                count++;
            }
        }

        if (currentTime < ans) {
            ans = currentTime;
            bestTeam = currentTeam;
        }
    }

    cout << fixed << setprecision(9) << ans << "\n";
    for (const string &name : bestTeam) {
        cout << name << "\n";
    }

    return 0;
}