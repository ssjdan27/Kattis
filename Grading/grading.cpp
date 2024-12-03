#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    int examScore;
    cin >> a >> b >> c >> d >> e;
    cin >> examScore;

    if (examScore >= a)
        cout << "A";
    else if (examScore >= b)
        cout << "B";
    else if (examScore >= c)
        cout << "C";
    else if (examScore >= d)
        cout << "D";
    else if (examScore >= e)
        cout << "E";
    else
        cout << "F";

    return 0;
}