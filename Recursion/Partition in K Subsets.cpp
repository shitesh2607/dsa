#include <bits/stdc++.h>
using namespace std;
int counter=0;
void sol1(int i, int n, int k, int nos, vector<vector<int>>ans){
    if(i>n){
        if(nos==k){
            counter++;
            cout<<counter<<"->";
            for(auto a:ans){
                for(auto x:a){
                    cout<<x<<" ";
                }
            }
            cout<<endl;
        }
        return;
    }
    for(int j=0; j<ans.size();j++){
        if(ans[j].size()>0){
            ans[j].push_back(i);
            sol1(i+1, n, k, nos, ans);
            ans[j].pop_back();
        }else{
            ans[j].push_back(i);
            sol1(i+1, n, k, nos+1, ans);
            ans[j].pop_back();
            break;
        }
    }
    
}

int main()
{
    vector<int>nums{4,3,2,3,5,2,1};
    int k =4;
    // int sum=0;
    // for(auto a: nums){
    //     sum+=a;
    // }
    sol1(1, 3, 2, 0, nums);
    return 0;
}

// Method 2
#include <bits/stdc++.h>
using namespace std;

// Method 2
bool sol2(int i, int k, int reqsum, int bucketNum, int bucketSum, vector<int>&nums, vector<int>alreadyPicked){
    
    if(bucketNum==k+1)return true;
    if(bucketSum==reqsum){
        return sol2(0, k, reqsum, bucketNum+1, 0, nums, alreadyPicked);
    }
    if(bucketSum>reqsum)return false;
    if(i>nums.size())return false;
    if(alreadyPicked[i]==1){
        return sol2(i+1, k, reqsum, bucketNum, bucketSum, nums, alreadyPicked);
    }else{
        // picking the element
        alreadyPicked[i] = 1;
        bucketSum +=nums[i];
        bool opt1 = sol2(i+1, k, reqsum, bucketNum, bucketSum, nums, alreadyPicked);
        // not picking the element
        alreadyPicked[i] = 0;
        bucketSum -=nums[i];
        bool opt2 = sol2(i+1, k, reqsum, bucketNum, bucketSum, nums, alreadyPicked);
        return opt1 | opt2;
    }
}

int main()
{
    vector<int>nums{1,2,3,4};
    int k =2;
    int sum=0;
    for(auto a: nums){
        // cout<<a<<endl;
        sum=sum+a;
    }
    
    // sol1(1, 3, 2, 0, ans);
    if(sum%k!=0){
        return false;
    }
    int bucketNum = 1;
    int bucketSum=0;
    int n = nums.size();
    int reqsum=sum/k;
    vector<int>alreadyPicked(n,0);
    bool ans = sol2(0, k,reqsum, bucketNum, bucketSum, nums, alreadyPicked);
    cout<<ans<<endl;
    return 0;
}