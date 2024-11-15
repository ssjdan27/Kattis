#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    string phrase;

    cin >> n >> m;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string row;
        getline(cin, row);
        for(int j = 0; j < m; j++){
            if(row[j] != '.'){
                phrase += row[j];
            }
        }
    }

    cout << phrase;

    return 0;
}