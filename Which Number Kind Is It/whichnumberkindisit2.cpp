#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int root = (int)(sqrt(num));
    return root * root == num;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;

        bool odd = num % 2 == 1;
        bool perfectSquare = isPerfectSquare(num);

        if (odd && perfectSquare) {
            cout << "OS";
        } else if (odd) {
            cout << "O";
        } else if (perfectSquare) {
            cout << "S";
        } else {
            cout << "EMPTY";
        }
        cout << "\n";
    }

    return 0;
}