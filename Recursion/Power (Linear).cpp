#include<bits/stdc++.h>
using namespace std;
int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x*power(x, n-1);
}

int main()
{
    // cout<<"Hello World";
    int ans;
    
    ans = power(5, 2);
    cout<<ans;
    return 0;
}
// Comment