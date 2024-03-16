#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int fun(int index,vector<int> nums, vector<int> subSet, int sum, int target){
    if(nums.size()<=index){
        if(sum==target){
            return 1;
        }
        // condition not satisfied
        return 0;
    }
    subSet.push_back(nums[index]);
    sum += nums[index];
    int l = fun(index+1, nums, subSet, sum, target);

    subSet.pop_back();
    sum -= nums[index];
    int r = fun(index+1, nums, subSet, sum, target);
    return l+r;
}

int main()
{
    // cout<<"Hello World";
    int count =0;
    vector<int> empty;
    vector<int> a{1,2,1, 3};
    count = fun(0, a, empty, sum, 3);
    cout<<count<<endl;
    return 0;
}
