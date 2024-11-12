#include <iostream>
#include <list>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int n, m;
    int count = 0;

    cin >> n;
    cin >> m;
    cin.ignore();

    list<int> numbers;
    string line;
    getline(cin, line);

    istringstream iss(line);
    int number;

    while (iss >> number) {
        numbers.push_back(number);
    }

    for(auto it = numbers.begin(); it != prev(numbers.end(), m - 1); ++it){
        int evenCount = 0;
        auto sub_it = it;
        for(int j = 0; j < m; ++j, ++sub_it){
            if(*sub_it % 2 == 0)
                evenCount++;
        }
        if(evenCount > 1)
            count++;
    }

    cout << count;

    return 0;
}