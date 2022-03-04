#include <bits/stdc++.h>
using namespace std;

void subArray(vector<int>arr, int sum){
    int curSum = 0;
    int start = 0;
    int end = -1;
    unordered_map<int, int> hash;
    for(int i=0;i<arr.size();i++){
        curSum = curSum+arr.at(i);
        if(curSum-sum == 0){
            start =0;
            end = i;
            break;
        }
        
        if(hash.count(curSum-sum)){
            start = hash.at(curSum-sum)+1;
            end=i;
            break;
        }
        hash.insert({curSum-sum, i});
    }
    
    
    
}

int main()
{
    vector<int>arr{10, 15,-5, 15, -10, 5};
    subArray(arr, 20);
    return 0;
}