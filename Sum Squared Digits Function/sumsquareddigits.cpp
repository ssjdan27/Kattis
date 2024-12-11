#include <bits/stdc++.h>
using namespace std;

int sumSquaredDigits(int base, unsigned int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % base;  
        sum += digit * digit;   
        num /= base;            
    }
    return sum;
}

int main() {
    int p;
    cin >> p;

    for (int i = 0; i < p; i++) {
        int k, b;
        unsigned int n;
        cin >> k >> b >> n;

        int result = sumSquaredDigits(b, n);
        cout << k << " " << result << "\n";
    }

    return 0;
}
