#include <bits/stdc++.h>
using namespace std;
vector<int> inverse_array(vector<int>arr){
    vector<int> ans(arr.size()-1,0);
    for(int i=0;i<arr.size();i++){
        ans[arr[i]] = i;
    }
    return ans;
}

int main()
{
    cout<<"Hello World"<<endl;
    vector<int> ans;
    vector<int> inp{0,1,2,3,4};
    ans = inverse_array(inp);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}
// time n