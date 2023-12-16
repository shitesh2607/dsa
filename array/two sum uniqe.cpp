#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void twoSum(vector<int>& numbers, int target) {
        vector<pair<int,int>>ans;
        sort(numbers.begin(), numbers.end());
        int n = numbers.size();
        int left = 0;
        int right = n-1;
        while(left<right){
            if(left!=0 && numbers[left] == numbers[left-1]){
                left++;
                continue;
            }
            int sum = numbers[left]+numbers[right];
            // cout<<sum<<endl;
            if(sum==target){
                // cout<<numbers[left]<<" "<<numbers[right]<<endl;
                ans.push_back({left, right});
                // ans.push_back(right);
                left++;
                right--;
            }else if(sum>target){
                right--;
            }else{
                left++;
            }
        }
        for(int i=0; i<ans.size();i++){
            cout<< ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
};

int main(){
    vector<int> a = {1,2,2,4,4,7,7,5,6,3,6,5,3,1};
    Solution s;
    s.twoSum(a, 9);
    return 0;
}
