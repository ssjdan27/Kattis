#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int winner = -1;
    vector<vector<char>> squares;

    for (int i = 0; i < 3; i++)
    {
        char a, b, c;
        vector<char> row;
        cin >> a >> b >> c;
        row.push_back(a);
        row.push_back(b);
        row.push_back(c);
        squares.push_back(row);
    }

    for (int i = 0; i < 3; i++)
    {
        if (squares[i][0] == squares[i][1] && squares[i][1] == squares[i][2])
        {
            if (squares[i][0] == 'X')
            {
                winner = 1;
            }
            else if (squares[i][0] == 'O')
            {
                winner = 2;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (squares[0][i] == squares[1][i] && squares[1][i] == squares[2][i])
        {
            if (squares[0][i] == 'X')
            {
                winner = 1;
            }
            else if (squares[0][i] == 'O')
            {
                winner = 2;
            }
        }
    }

    if (squares[0][0] == squares[1][1] && squares[1][1] == squares[2][2])
    {
        if (squares[0][0] == 'X')
        {
            winner = 1;
        }
        else if (squares[0][0] == 'O')
        {
            winner = 2;
        }
    }

    if (squares[0][2] == squares[1][1] && squares[1][1] == squares[2][0])
    {
        if (squares[0][2] == 'X')
        {
            winner = 1;
        }
        else if (squares[0][2] == 'O')
        {
            winner = 2;
        }
    }

    if (winner == 1)
    {
        cout << "Johan har vunnit";
    }
    else if (winner == 2)
    {
        cout << "Abdullah har vunnit";
    }
    else
    {
        cout << "ingen har vunnit";
    }

    return 0;
}