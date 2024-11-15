#include <iostream>
using namespace std;

int main() {
    int w, s;
    cin >> w >> s;

    int totalTungstenWeight = (s * (s + 1) / 2) * 29260;

    for (int i = 1; i <= s; i++) {
        int goldWeight = totalTungstenWeight + i * (29370 - 29260);
        if (goldWeight == w) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}