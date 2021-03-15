#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vec vector<ll>

void ratInMaze(int arr[4][4], int n, int row, int col, string dir, vector<string> &path)
{

    if (row >= n || col >= n || arr[row][col] == 0) // if we reach out of the arr or we meet
    // 0 or dead end of the array we simply return/exit the backtracking;
    {
        return;
    }

    if (row == n - 1 && col == n - 1) // when we will reach to end of arr the only we'll add
    // push back the string in vector to count all the unique path we can follow up to
    // reach out of maze
    {
        path.push_back(dir + "");
    }

    ratInMaze(arr, n, row + 1, col, dir + "D", path); // to call/move the down step
    ratInMaze(arr, n, row, col + 1, dir + "R", path); //to call/move the right step
}

int main()
{
    int n = 4;
    int m[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> path;

    ratInMaze(m, n, 0, 0, "", path);

    for (auto x : path)
    {
        cout << x << endl;
    }

    return 0;
}