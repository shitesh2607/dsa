/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void floodFill(vector<vector<int>>arr, int row, int col, string path, vector<vector<bool>> visited){
    if(row == arr.size()-1 && col == arr[0].size()-1){
        cout<<path<<endl;
        return;
    }
    if( row<0 || col <0 || row >= arr.size() || col>=arr[0].size() || arr[row][col] == 1 || visited[row][col] == true){
        return;
    }
    
    // cout<<path<<endl;
    visited[row][col]==true;
    // top
    floodFill(arr, row-1, col, path+"t", visited);
    // left
    floodFill(arr, row, col-1, path+"l", visited);
    // down
    floodFill(arr, row+1, col, path+"d", visited);
    // right
    floodFill(arr, row, col+1, path+"r", visited);
    visited[row][col]==false;

}

int main()
{
    
    vector<vector<int>> arr = {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 0, 0, 0}, {1, 0, 1, 0}, {0, 1, 0, 0}, {0, 0, 0, 1}, {0, 0, 0, 0}};
    int rows = arr.size();
    cout<<rows;
    int col = arr[0].size();
    cout<<col;
    vector<vector<bool>> arr1(rows, vector<bool>(col, false));    
    string path = "";
    floodFill(arr, 0, 0, "", arr1);
    // cout<<path<<endl;
    // return 0;
}
// code not working
