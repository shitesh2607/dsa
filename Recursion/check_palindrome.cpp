

#include <bits/stdc++.h>
using namespace std;


bool fun(string str, int i, int n){ 
    if(i>=n/2){
        return true;
    }
    if(str[i]!= str[n-i-1]){
        return false; 
    }
    return fun(str, i+1, n);
}

int main(){
    
    string str = "aH9itiHa";
    int n = str.size();
    bool a;
    a = fun(str, 0, n);
    cout<<a<<endl;

    return 0;
}