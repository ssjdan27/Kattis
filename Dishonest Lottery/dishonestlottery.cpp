#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int,int> freq;
    vector<int> numbers;

    for(int i = 0; i < 10 * n; i++){
        int num1,num2,num3,num4,num5;
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        freq[num1]++;
        freq[num2]++;
        freq[num3]++;
        freq[num4]++;
        freq[num5]++;
    }

    for(const auto &x: freq){
        if(x.second > 2 * n){
            numbers.push_back(x.first);
        }
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i];
        if(i < numbers.size() - 1){
            cout << " ";
        }
    }

    if(numbers.empty()){
        cout << -1;
    }

    return 0;
}