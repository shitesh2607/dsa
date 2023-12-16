#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int i, int j, string s){
        while(i<j){
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }else{
                return false;
            }
        }
            return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }else{
//                 skip from left or skip from right
                return isPalindrome(i+1, j, s) || isPalindrome(i, j-1, s);
                
            }
        }
        return true;
    }
};