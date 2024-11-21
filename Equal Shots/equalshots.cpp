#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int shot1 = 0;
    int shot2 = 0;
    cin >> a >> b;
    cin.ignore();

    for (int i = 0; i < a; i++)
    {
        int c, v;
        cin >> v >> c;
        shot1 += (v * c);
    }

    for (int i = 0; i < b; i++)
    {
        int c, v;
        cin >> v >> c;
        shot2 += (v * c);
    }

    if (shot1 == shot2)
    {
        cout << "same";
    }
    else
    {
        cout << "different";
    }
    return 0;
}