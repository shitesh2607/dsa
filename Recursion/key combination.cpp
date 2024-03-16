#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    void Combination(string digits, int index, string output, vector<string>&ans, string mapping[]){
//         base case
        if(index >= digits.size()){
            ans.push_back(output);
            return ;
        }
        int number = digits[index] - '0';
        string str = mapping[number];
        for(int i=0; i<str.size();i++){
            output.push_back(str.at(i));
            Combination(digits, index+1, output, ans, mapping);
            output.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0){
            return ans;
        }
        string output;
        int index =0;
        string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        Combination(digits, index, output, ans, mapping);
        return ans;
    }
};