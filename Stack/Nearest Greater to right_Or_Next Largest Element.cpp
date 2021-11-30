// problem statement link Gfg-: https://www.geeksforgeeks.org/next-greater-element/
#include<bits/stdc++.h>
using namespace std;
 class Solution{
     public:
     vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> v;
        stack<long long> stack;
        int i = n-1;
        while(i>=0){
            if(stack.size()==0){
                stack.push(arr[i]);
                v.push_back(-1);
                i--;
            }else if(stack.size()>0 && stack.top()>arr[i]){
                v.push_back(stack.top());
                stack.push(arr[i]);
                i--;
            }else if(stack.size()>0 && stack.top()<=arr[i]){
                stack.pop();
            }
        }
         reverse(v.begin(), v.end());
         return v;
    }
 };