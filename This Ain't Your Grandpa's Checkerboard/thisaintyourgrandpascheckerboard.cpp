#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool isCorrect = true;
    vector<vector<char>> checkerboard;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string row;
        vector<char> squares;
        getline(cin, row);
        for (char c : row)
        {
            squares.push_back(c);
        }
        checkerboard.push_back(squares);
    }

    for (int i = 0; i < n; i++)
    {
        int black = 0;
        int white = 0;
        int streak = 1;

        if (checkerboard[i][0] == 'W')
            white++;
        else
            black++;

        for (int j = 1; j < n; j++)
        {
            if (checkerboard[i][j] == 'W')
                white++;
            else
                black++;

            if (checkerboard[i][j] == checkerboard[i][j - 1])
            {
                streak++;
                if (streak >= 3)
                {
                    isCorrect = false;
                    break;
                }
            }
            else
            {
                streak = 1;
            }
        }
        if (black != white)
        {
            isCorrect = false;
            break;
        }
    }

    if (isCorrect)
    {
        for (int i = 0; i < n; i++)
        {
            int black = 0;
            int white = 0;
            int streak = 1;

            if (checkerboard[0][i] == 'W')
                white++;
            else
                black++;

            for (int j = 1; j < n; j++)
            {
                if (checkerboard[j][i] == 'W')
                    white++;
                else
                    black++;

                if (checkerboard[j][i] == checkerboard[j - 1][i])
                {
                    streak++;
                    if (streak >= 3)
                    {
                        isCorrect = false;
                        break;
                    }
                }
                else
                {
                    streak = 1;
                }
            }
            if (black != white)
            {
                isCorrect = false;
                break;
            }
        }
    }

    if (isCorrect)
        cout << 1;
    else
        cout << 0;

    return 0;
}
