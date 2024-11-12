#include <iostream>
#include <set>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::set<std::pair<int, int>> locations;

    for (int i = 0; i < k; ++i) {
        int x, y;
        std::cin >> x >> y;
        locations.insert({x, y});
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (locations.find({i, j}) != locations.end()) {
                std::cout << '*';
            } else {
                std::cout << '.';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}