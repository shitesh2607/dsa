#include <bits/stdc++.h>
using namespace std;

int sum = 0;
bool fun(int index,vector<int> nums, vector<int> subSet, int sum,int target){
    if(nums.size()<=index){
        if(sum==target){
            for(auto x: subSet){
                cout<<x<<" ";
            }
            cout<<endl;
            return true;
        }
        // condition not satisfied
        return false;
    }
    subSet.push_back(nums[index]);
    sum += nums[index];
    if(fun(index+1, nums, subSet, sum, target) == true){
        return true;
    }
    subSet.pop_back();
    sum -= nums[index];
    if(fun(index+1, nums, subSet, sum, target)==true){
        return true;
    }
    return false;
}

int main()
{
    // cout<<"Hello World";
    vector<int> empty;
    vector<int> a{1,2,1, 4, 2, 3, 4,5};
    fun(0, a, empty, sum, 6);

    return 0;
}
