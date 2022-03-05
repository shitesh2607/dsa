#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int>nums{5,10,15,5,4, 5, 6, 15};
    int size = nums.size();
    unordered_map<int, int>hash;
    int count;
    int ans=0;
    for(int i=0;i<size;i++){
        if(hash.count(nums[i])){
            hash.at(nums[i]) += 1;
        }else{
            count = 1;
            hash.insert({nums.at(i), count});
        }
        
    }
    
    for(auto itr = hash.begin(); itr != hash.end(); ++itr) {
            if(itr->second == 1){
                cout<<itr->first<<endl;
                ans = ans + itr->first;
            }
    }
    cout<<ans;
}