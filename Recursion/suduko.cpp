/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> board, int x, int y, int val){
    // row
    cout<<"valid"<<endl;
    for(int j=0; j<board[0].size();j++){
        if(board[x][j]==val){
            return false;
        }
    }
    for(int i=0;i<board.size();i++){
        if(board[i][y]==val){
            return false;
        }
    }
    int smi = x/3*3;
    int smj = y/3*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[smi+i][smj+j]==val){
                return false;
            }
        }
    }
    return true;
}

void sol(vector<vector<int>> &board, int i, int j){
    
    if(i == board.size()){
        return;
    }
    int ni =0;
    int nj =0;
    
    if(j == board[0].size()-1){
        ni = i+1;
        nj = 0;
    }else{
        ni=i;
        nj = j + 1;
        
    }
    
    if(board[i][j] != 0){
         sol(board, ni, nj);
    }else{
        for(int po = 1;po<=9;po++){
            if(isValid(board, i, j, po)==true){
                board[i][j] == po;
                sol(board, ni, nj);
                board[i][j] == 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> grid = { 
        {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
        {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
        {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
        {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
        {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
        {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
        {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
        {0, 0, 5, 2, 0, 6, 3, 0, 0} 
    };
    
    cout<<grid.size()<<endl;
    sol(grid, 0, 0);
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
