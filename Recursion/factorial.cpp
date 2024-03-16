#include<bits/stdc++.h>
using namespace std;
int printNum(int val){
    if(val==0){
        return 1;
    }
    return val*printNum(val-1);
}

int main()
{
    // cout<<"Hello World";
    cout<<printNum(3);

    return 0;
}