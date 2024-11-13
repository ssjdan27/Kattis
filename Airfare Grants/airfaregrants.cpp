#include <iostream>
using namespace std;
int main()
{
    int n;
    int smallest = 1000000;
    int largest = 0;
    int cost = 0;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (value < smallest)
        {
            smallest = value;
        }
        if (value > largest)
        {
            largest = value;
        }
    }

    int reimbursed = largest / 2;
    cost = smallest - reimbursed;

    if (cost < 0)
    {
        cout << 0;
    }
    else
    {
        cout << cost;
    }

    return 0;
}