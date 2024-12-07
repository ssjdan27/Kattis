#include <iostream>
using namespace std;
int main()
{
    int n;
    int lecturesAwake = 0;
    string lectures;
    cin >> n;
    cin >> lectures;

    int coffees = 0;
    for (char lect : lectures)
    {
        if (lect == '1')
        {
            coffees = 2;
            lecturesAwake++;
        }
        else if (lect == '0' && coffees > 0)
        {
            coffees--;
            lecturesAwake++;
        }
    }

    cout << lecturesAwake;
    return 0;
}