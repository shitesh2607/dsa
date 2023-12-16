class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
         vector<vector<int>> vect( n , vector<int> (m, 0));
        for(auto i=0;i<m;i++){
            for(auto j=0; j<n;j++){
                vect[j][i] = matrix[i][j];
            }
        }
        return vect;
        
    }
};