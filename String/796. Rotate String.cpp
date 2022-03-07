/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
        if(s.length()!= goal.length()){
            return false;
        }
        // reverse(goal.begin(), goal.end());
        string wholeString = s+s;
        
        return (wholeString.find(goal) != string::npos);;
        
    }

int main()
{
    cout<<"Hello World"<<endl;
    bool ans;
    ans = rotateString("abcde", "abced");
    cout<<ans;

    return 0;
}
