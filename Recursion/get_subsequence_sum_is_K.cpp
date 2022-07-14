#include <bits/stdc++.h>
using namespace std;

int sum = 0;
void fun(int index,vector<int> nums, vector<int> subSet, int sum,int target){
    if(nums.size()<=index){
        if(sum==target){
            for(auto x: subSet){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }
    subSet.push_back(nums[index]);
    sum += nums[index];
    fun(index+1, nums, subSet, sum, target);
    subSet.pop_back();
    sum -= nums[index];
    fun(index+1, nums, subSet, sum, target);
}

int main()
{
    // cout<<"Hello World";
    vector<int> empty;
    vector<int> a{1,2,1};
    fun(0, a, empty, sum, 2);

    return 0;
}
