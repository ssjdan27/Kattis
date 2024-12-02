#include <iostream>
using namespace std;
int main()
{
    int blocks;
    cin >> blocks;
    int height = 0;
    int currBlocks = 0;
    int currLayerDimension = 1;
    bool largestHeightFound = false;

    while (!largestHeightFound)
    {
        int blocksUsed = currLayerDimension * currLayerDimension;
        currBlocks += blocksUsed;
        if (currBlocks <= blocks)
        {
            height++;
            currLayerDimension += 2;
        }
        else
        {
            largestHeightFound = true;
        }
    }

    cout << height;

    return 0;
}