#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, d;
    cin >> p >> d;
    unordered_map<int, pair<int, int>> votes;

    for(int i = 0; i < p; i++){
        int district, aVote, bVote;
        cin >> district >> aVote >> bVote;
        votes[district].first += aVote;
        votes[district].second += bVote;
    }

    int totalAVote = 0;
    int totalBVote = 0;
    int wastedAVotes = 0;
    int wastedBVotes = 0;

    for(int i = 1; i <= d; i++){
        int aVote = votes[i].first;
        totalAVote += aVote;
        int bVote = votes[i].second;
        totalBVote += bVote;
        int excessVotes = ((aVote + bVote) / 2) + 1;

        if(aVote > bVote){
            cout << "A " << aVote - excessVotes << " " << bVote << "\n"; 
            wastedAVotes += aVote - excessVotes;
            wastedBVotes += bVote;
        }
        else{
            cout << "B " << aVote << " " << bVote - excessVotes << "\n"; 
            wastedBVotes += bVote - excessVotes;
            wastedAVotes += aVote;
        }
    }

    double efficiencyGap = abs((double)wastedAVotes - wastedBVotes) / (totalAVote + totalBVote);

    cout << setprecision(12) << efficiencyGap << "\n";

    return 0;
}