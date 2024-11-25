#include <iostream>
using namespace std;
int main()
{
    int n;
    int min = 1000000;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int age;
        cin >> age;
        if (age < min)
        {
            min = age;
        }
    }

    cout << min;

    return 0;
}