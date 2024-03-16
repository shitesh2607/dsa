// Tabulation form
// https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int>arr, int targetSum, int n){
    // initilization
    vector<vector<bool>> dp(n+1, vector<bool>(targetSum+1));
    for(int i=0;i<=n;i++){
            dp[i][0] = true;
    }
    for(int j=1;j<=targetSum;j++){
            dp[0][j] = false;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=targetSum;j++){
            if(arr[i-1]<=j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][targetSum];
}

int main()
{
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int n =arr.size();
    int sum = 2;
    bool ans = subsetSum(arr, sum, n);
    cout<<ans<<endl;
    return 0;
}