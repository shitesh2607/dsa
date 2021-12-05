// https://www.geeksforgeeks.org/find-expression-duplicate-parenthesis-not/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool element(string x){
        stack<char>stack_char;
        int len = x.length();
        for(int i=0;i<len;i++){
            if(x[i]==')'){
                if(stack_char.top()=='('){
                    return true;
                }else{
                  while(stack_char.top() != '('){
                    stack_char.pop();
                  }
                   stack_char.pop(); 
                }
                
            }else{
                stack_char.push(x[i]);
            }
        }
        return false;
    }
};

int main() {
	
	Solution A;
	string s = "((a+b)+(c+d))";
	bool ans;
	ans = A.element(s);
	std::cout << ans << std::endl;
	return 0;
}