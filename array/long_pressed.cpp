#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
//         for this edge case
//         name: 'abcd', typed: 'abc'
        if(name.size()>typed.size())return false;
        int i=0;
        int j=0;
         while(i<name.size() && j<typed.size()){
             
             if(name[i]==typed[j]){
                 i++;
                 j++;
             }else{
                 if(i>0 && name[i-1]==typed[j]){
                     j++;
                 }else{
                     return false;
                 }
             }
             
         }
        
//         for this edge case
//         name: 'aabbc', typed: 'aabbccd'
        
        while(j<typed.size()){
            if(name[i-1]==typed[j]){
                j++;
            }else{
                return false;
            }
        }

//         for this type edge case
//         name: 'aabbcc', typed: 'aaabbb'
        if(i<name.size()){
            return false;
        }
        
        return true;
    }
};
// TC: o(n)
// sc: o()