#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int getOddOneOut(const vector<int>& nums){
    unordered_map<int, int> freq;

    for(int num: nums){
        freq[num]++;
    }

    for(auto it: freq){
        if(it.second == 1){
            return it.first;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        int g; 
        vector<int> numbers;
        cin >> g;
        cin.ignore();
        
        for(int j = 0; j < g; j++){
            int num;
            cin >> num;
            numbers.push_back(num);
        }

        cout << "Case #" << i+1 << ": " << getOddOneOut(numbers) << endl;
    }
    return 0;
}

