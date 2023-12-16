#include <bits/stdc++.h>
using namespace std;
// https://www.youtube.com/watch?v=XZueXHOhO5E&list=PL-Jc9J83PIiE-TR27GB7V5TBLQRT5RnSl&index=14
class Solution {
public:
//     chaining technique
    int maxChunksToSorted(vector<int>& arr) {
        int maxVal =0;
        int chunkCount = 0;
     
        for(int i=0; i<arr.size();i++){
            maxVal = max(maxVal, arr[i]);
            if(i==maxVal){
                chunkCount++;
            }
        }

        return chunkCount;
    }
};
// TC: O(n)