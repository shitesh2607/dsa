#include<bits/stdc++.h>
using namespace std;
void factorial(int val){
    if(val==0){
        return;
    }
    cout<<val<<endl;
    factorial(val-1);
    cout<<val<<endl;
}

int main()
{
    // cout<<"Hello World";
    factorial(5);
    return 0;
}
