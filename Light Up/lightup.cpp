#include <bits/stdc++.h>
using namespace std;

bool everySquareLit(vector<vector<char>> &grid){
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == '.'){
                return false;
            }
        }
    }
    return true;
}

bool adjacentCheck(vector<vector<char>> &grid, int row, int col){
    int count = 0;
    int need = grid[row][col] - '0';

    if(col != 0 && grid[row][col-1] == '?'){
        count++;
    }
    if(col != grid[0].size() - 1 && grid[row][col+1] == '?'){
        count++;
    }

     
    if(row != 0 && grid[row-1][col] == '?'){
        count++;
    }
    if(row != grid.size() - 1 && grid[row+1][col] == '?'){
        count++;
    }

    if(count == need){
        return true;
    }
    return false;
}

bool lightUp(vector<vector<char>> &grid, int row, int col){
    int origRow = row;
    int origCol = col;

    row--;
    while(row >= 0){
        if(grid[row][col] == 'X' || grid[row][col] == '0' || grid[row][col] == '1' || grid[row][col] == '2' || grid[row][col] == '3' || grid[row][col] == '4'){
            break;
        }
        else if(grid[row][col] == '.'){
            grid[row][col] = '$';
        }
        else if(grid[row][col] == '?'){
            return false;
        }
        row--;
    }
    row = origRow;
    row++;
    while(row <= grid.size() - 1){
        if(grid[row][col] == 'X' || grid[row][col] == '0' || grid[row][col] == '1' || grid[row][col] == '2' || grid[row][col] == '3' || grid[row][col] == '4'){
            break;
        }
        else if(grid[row][col] == '.'){
            grid[row][col] = '$';
        }
        else if(grid[row][col] == '?'){
            return false;
        }
        row++;
    }
    row = origRow;

    col--;
    while(col >= 0){
        if(grid[row][col] == 'X' || grid[row][col] == '0' || grid[row][col] == '1' || grid[row][col] == '2' || grid[row][col] == '3' || grid[row][col] == '4'){
            break;
        }
        else if(grid[row][col] == '.'){
            grid[row][col] = '$';
        }
        else if(grid[row][col] == '?'){
            return false;
        }
        col--;
    }
    col = origCol;
    col++;
    while(col <= grid[0].size() - 1){
        if(grid[row][col] == 'X' || grid[row][col] == '0' || grid[row][col] == '1' || grid[row][col] == '2' || grid[row][col] == '3' || grid[row][col] == '4'){
            break;
        }
        else if(grid[row][col] == '.'){
            grid[row][col] = '$';
        }
        else if(grid[row][col] == '?'){
            return false;
        }
        col++;
    }
    col = origCol;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    bool valid = true;
    cin >> n;

    vector<vector<char>> grid;
    for(int i = 0; i < n; i++){
        string row;
        cin >> row;
        vector<char> r;
        for(char c: row){
            r.push_back(c);
        }

        grid.push_back(r);
    }

    for(int i = 0; i < n; i++){
        if(!valid){
            break;
        }
        for(int j = 0; j < n; j++){
            if(grid[i][j] == '?'){
                valid = lightUp(grid, i, j);
            }
            else if(grid[i][j] == '0' || grid[i][j] == '1' || grid[i][j] == '2' || grid[i][j] == '3' || grid[i][j] == '4'){
               valid = adjacentCheck(grid, i, j);
            }

            if(valid == false){
                break;
            }

        }
    }

    if(valid){
        valid = everySquareLit(grid);
    }

    if(valid){
        cout << 1;
    }
    else{
        cout << 0;
    }


    return 0;
}