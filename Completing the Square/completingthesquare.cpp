#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

float computeDistance(int x1, int y1, int x2, int y2)
{
    float distance;
    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return distance;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float longestDistance = 0;
    vector<int> diagonalPair;
    vector<int> notDiagonalPair;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    float distance1 = computeDistance(x1,y1,x2,y2);
    float distance2 = computeDistance(x1,y1,x3,y3);
    float distance3 = computeDistance(x2,y2,x3,y3);
    longestDistance = max(distance1, max(distance2, distance3));

    if(distance1 == longestDistance){
        diagonalPair.push_back(x1);
        diagonalPair.push_back(y1);
        diagonalPair.push_back(x2);
        diagonalPair.push_back(y2);

        notDiagonalPair.push_back(x3);
        notDiagonalPair.push_back(y3);
    }
    else if(distance2 == longestDistance){
        diagonalPair.push_back(x1);
        diagonalPair.push_back(y1);
        diagonalPair.push_back(x3);
        diagonalPair.push_back(y3);

        notDiagonalPair.push_back(x2);
        notDiagonalPair.push_back(y2);
    }
    else{
        diagonalPair.push_back(x2);
        diagonalPair.push_back(y2);
        diagonalPair.push_back(x3);
        diagonalPair.push_back(y3);

        notDiagonalPair.push_back(x1);
        notDiagonalPair.push_back(y1);
    }

    float mx = (diagonalPair[0] + diagonalPair[2]) / 2.0;
    float my = (diagonalPair[1] + diagonalPair[3]) / 2.0;

    x4 = (2 * mx) - notDiagonalPair[0];
    y4 = (2 * my) - notDiagonalPair[1];

    cout << x4 << " " << y4;

    return 0;
}