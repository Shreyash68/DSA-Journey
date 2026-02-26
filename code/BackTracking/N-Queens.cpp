#include<iostream>
#include<string>
#include<vector>

using namespace std;



    bool isSafe(vector<vector<char>> board,int row,int col) {
            int size = board.size();
            
            for(int i=0;i<col;i++){
                //column left
                if(board[row][i]=='Q'){
                    return false;
                }
            }

            for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
                //diagonal up
                if(board[i][j]=='Q'){
                    return false;
                }
            }
            
            for(int i=row+1,j=col-1;i<size && j>=0;i++,j--){
                //diagonal down
                if(board[i][j]=='Q'){
                    return false;
                }
            }

            return true;
        }
    
    void printBoard(vector<vector<char>> &board,vector<vector<string>> & ans){
            vector<string> vecstr ;
        for(int i=0;i<board.size();i++){
            string str(board[i].begin(),board[i].end());
            
            vecstr.push_back(str);
        }
        ans.push_back(vecstr);
    }

    void solve(vector<vector<char>>& board, int n, int row, int col, vector<vector<string>> &ans) {
        //base
        if(row>=board.size()) return;

        if(n==0){
            //store(board)store ans;

            printBoard(board,ans);
           
        }        

        // comput
        for(int i=0;i<board.size();i++){
           
            if(isSafe(board,row,col)){
                board[row][col]='Q';
               
                solve(board,n-1,0,col+1,ans);
               
                board[row][col]='.';
                
            }
            
            if(row+1<board.size()) row++;
        }
        return;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<char>> board (n, vector<char> (n,'.'));
        int row = 0;
        int col = 0;
       
        
        solve(board, n, row, col,ans);
        return {};
    }


int main(){ 
    solveNQueens(1);
    return 0;
}