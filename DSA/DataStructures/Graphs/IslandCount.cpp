#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

void islandHelper(vector<vector<int> > &grid, int x, int y, int row, int col)
{
    if (x >= row || y >= col || grid[x][y] != 1 || x < 0 || y < 0)
    {
        return;
    }

    grid[x][y] = 2;

    islandHelper(grid, x + 1, y, row, col);
    islandHelper(grid, x - 1, y, row, col);
    islandHelper(grid, x, y + 1, row, col);
    islandHelper(grid, x, y - 1, row, col);
}

void islandFun(vector<vector<int> > grid)
{
    if (!grid.size())
    {
        return;
    }

    int islands = 0;
    int col = grid[0].size();

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 1)
            {
                islandHelper(grid, i, j, grid.size(), col);
                islands++;
            }
        }
    }

    cout<<islands<<endl;
}

int main()
{
    
    return 0;
}