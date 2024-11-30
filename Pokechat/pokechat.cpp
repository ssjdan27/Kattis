#include <iostream>
using namespace std;
int main()
{
    string encoding;
    string ids;

    getline(cin, encoding);
    cin >> ids;

    for (int i = 0; i < ids.length(); i += 3)
    {
        string id = ids.substr(i, 3);
        int num = stoi(id);
        cout << encoding[num - 1];
    }
    return 0;
}