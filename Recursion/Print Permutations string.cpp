#include<bits/stdc++.h>
using namespace std;
void permute(string s, string output){
    if(s.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0; i<s.size();i++){
        char temp = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        string totalstr = left+right;
        // cout<<output+temp<<endl;
        permute(totalstr, output+temp);
    }
}

int main()
{
    // cout<<"Hello World";
    permute("abc", "");
    return 0;
}