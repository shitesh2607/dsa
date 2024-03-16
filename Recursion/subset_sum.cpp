// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> ans;
    int sum = 0;
    void generateSubSets(int index, vector<int>nums, int n, int sum){
        if(n == index){
            ans.push_back(sum);
            return;
        }
        
        generateSubSets(index+1, nums, n, sum+nums[index]);
        generateSubSets(index+1, nums, n, sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        generateSubSets(0, arr, N, sum);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// time Complexity o(2^n)
// space o(n)