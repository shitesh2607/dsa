/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxLength = 0;
        int sum = 0;
        int n = nums.size();
        
        for(int x=0;x<n;x++){
            if(nums[x]==0){
                nums[x]=-1;
            }
        }
        
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum==0){
                if(maxLength<i+1){
                    maxLength = i+1;
                }
            }else{
                if(mp.count(sum)){
                    int tempLen = i-mp[sum];
                    if(maxLength<tempLen){
                        maxLength = tempLen;
                    }
                }else{
                    mp.insert({sum, i});
                }
            }
        }
        return maxLength;
    }

int main()
{
    vector<int>nums{0, 1, 0, 1, 0, 0, 1, 0, 1};
    int maxLen;
    maxLen = findMaxLength(nums);
    cout<<maxLen<<endl;
    return 0;
}
