#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long int discount = 0;
    vector<int> items;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        items.push_back(item);
    }

    if (items.size() < 3)
    {
        cout << 0;
    }

    else
    {
        sort(items.begin(), items.end());

        for(int i = items.size() - 3; i >= 0; i -=3){
            discount += items[i];
        }

        cout << discount;
    }

    return 0;
}