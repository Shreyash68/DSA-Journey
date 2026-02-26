#include <iostream>

#include <vector>

using namespace std;

void solve(vector<vector<char>> &board, int &size, int row, int col, bool &found)
{

    if (row > size)
    {
        found = true;
    }

    for (int i = 1; i < 10; i++)
    {
        if (isSafe(board, row, col, i))
        {
            board[row][col] = char(i);
            solve(board,size,row,col+1,found);
            board[row][col] = '.';
             
        }
    }
}

void solveSudoku(vector<vector<char>> &board)
{
    int size = board.size();
    bool found = false;
    solve(board, size, 0, 0, found);
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    solveSudoku(board);

    return 0;
}