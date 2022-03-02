#include<bits/stdc++.h>
using namespace std;



int main(){
    
    stack<char>stack_char;
    string s;
    cin>>s;
    
    for(int i=0; i< s.size();i++){
        char s_char = s.at(i);
        if(s[i] == ')' ){
            if(stack_char.top() == '('){
                cout<<"TRUE"<<endl;
                return 0;
            }else{
                while(stack_char.top() != '(' ) {
                    stack_char.pop();
                }
                stack_char.pop();
            }
        }else{
            stack_char.push(s_char);
        }
    }
    cout<<"FALSE"<<endl;
    

    
    return 0;
}
