#include<bits/stdc++.h>
using namespace std;
// Actualy both problem are exactly same.
// leetcode: 240. Search a 2D Matrix =: https://leetcode.com/problems/search-a-2d-matrix/
class soluion{
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
           int n = matrix.size();
           int m = matrix[0].size();
           int low = 0;
           int high = (n*m) - 1;
           while(low<=high){
               int mid = (low +(high  - low) / 2);
               if(matrix[mid/m][mid % m] == target){
                   return true;
               }
               if(matrix[mid/m][mid%m] < target){
                    low = mid +1;
                }else{
                    high = mid -1;
               }
           }
           return false;
         }
};


// leetcode: 240. Search a 2D Matrix II =: https://leetcode.com/problems/search-a-2d-matrix-ii/discuss/1598490/240-search-a-2d-matrix-ii-c-solution-time-complexity-omn-binary-search
class solution{
    public:
    bool searchMatrix(vector<vector<int>> matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;
        int j = col-1;
        while((i>=0 && i<=row-1) && (j<=col-1 && j>=0)){
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]>target){
                j--;
            }else if(matrix[i][j]<target){
                i++;
            }
        }
        return false;
    }
};