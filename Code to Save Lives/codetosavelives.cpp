#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string first, second;
        getline(cin, first); 
        getline(cin, second); 


        stringstream ss1(first);
        int digit, first_number = 0;
        while (ss1 >> digit) {
            first_number = first_number * 10 + digit; 
        }

        stringstream ss2(second);
        int second_number = 0;
        while (ss2 >> digit) {
            second_number = second_number * 10 + digit; 
        }

        int total_sum = first_number + second_number;

        string result = to_string(total_sum);
        for (int j = 0; j < result.length(); j++) {
            cout << result[j];
            if (j < result.length() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
