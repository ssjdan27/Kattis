#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words;
    string phrase;
    string word;
    getline(cin, phrase);

    istringstream stream(phrase);
    while (stream >> word)
    {
        words.push_back(word);
    }

    set<string> uniqueWords(words.begin(), words.end());

    if (words.size() == uniqueWords.size())
        cout << "yes";
    else
        cout << "no";

    return 0;
}