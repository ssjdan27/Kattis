#include <iostream>
using namespace std;
int main()
{
    int n;
    int correct = 0;
    cin >> n;

    char prev;
    cin >> prev;

    for (int i = 0; i < n - 1; i++)
    {
        char curr;
        cin >> curr;
        if (curr == prev)
        {
            correct++;
        }
        prev = curr;
    }

    cout << correct;

    return 0;
}