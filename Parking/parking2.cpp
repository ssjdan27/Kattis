#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int j = 0; j < n; j++)
        {
            cin >> numbers[j];
        }

        sort(numbers.begin(), numbers.end());

        int totalDistance = 0;
        for (int j = 1; j < n; j++)
        {
            totalDistance += numbers[j] - numbers[j - 1];
        }

        totalDistance += numbers[n - 1] - numbers[0];

        cout << totalDistance << endl;
    }

    return 0;
}