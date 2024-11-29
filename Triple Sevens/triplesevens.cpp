#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isGood = true;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < 3; i++)
    {
        bool valid = false;
        string numbers;
        getline(cin, numbers);
        for (int j = 0; j < numbers.length(); j++)
        {
            if (numbers[j] == '7')
            {
                valid = true;
                break;
            }
        }
        if (!valid)
        {
            isGood = false;
            break;
        }
    }

    if (isGood)
    {
        cout << "777";
    }
    else
    {
        cout << "0";
    }

    return 0;
}