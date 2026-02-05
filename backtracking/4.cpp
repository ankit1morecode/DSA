#include <bits/stdc++.h>
using namespace std;
    bool isSafe(vector<vector<char>> board,int row,int col){
        for(int i=0; i<row; i++){
            if(board[i][col]=='Q')return false;
        }
        for(int i=0; i<col; i++){
            if(board[row][i]=='Q')return false;
        }
        for(int i=row,j=col; i>=0&&j>=0; i--,j--){
            if(board[i][j]=='Q')return false;
        }
        for(int i=row,j=col; i>=0&&j<board.size(); i--,j++){
            if(board[i][j]=='Q')return false;
        }
        return true;
    }
    void solve(vector<vector<char>>& board,int row){
        int n = board.size();
        if(row==n){
            for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        cout << board[i][j] << " ";
                    }
                cout << endl;
            }
            return;
        }
        for(int j=0; j<n; j++){
            if(isSafe(board,row,j)){
                board[row][j]='Q';
                solve(board,row+1);
                board[row][j]='.';
            }
        }
    }
int main(){
    vector<vector<char>> board;
    int n = 4;
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    solve(board,0);
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << board[i][j] << " ";
    //     }
    //    cout << endl;
    // }
 return 0;
}