#include <iostream>
using namespace std;

int countSubstring(const string &str, const string &sub)
{
    int count = 0;
    int pos = 0;

    while ((pos = str.find(sub, pos)) != string::npos)
    {
        count++;
        pos += sub.length();
    }

    return count;
}

int main()
{
    int length;
    string message;

    cin >> message;
    length = message.length() / 3;
    if (countSubstring(message, message.substr(0, length)) == 2)
    {
        cout << message.substr(0, length);
    }
    else
    {
        cout << message.substr(length, length);
    }
    return 0;
}