#include <bits/stdc++.h>
using namespace std;
//  Method 1
// TC = o(N)
// SC = o(N) for even vector, o(N) for odd vector
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd; 
        
       int a= (int)A.size();        
        for(int i=0;i<a;i++)
        {
            if(A[i]%2==0)
            {
                even.push_back(A[i]);
            }
            else{odd.push_back(A[i]);}
        }
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
        
    }
};

// methos 2
