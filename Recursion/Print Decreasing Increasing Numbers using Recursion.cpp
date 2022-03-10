#include<bits/stdc++.h>
using namespace std;
void printNum(int val){
    if(val==0){
        return;
    }
    cout<<val<<endl;
    printNum(val-1);
    cout<<val<<endl;
}

int main()
{
    // cout<<"Hello World";
    printNum(5);

    return 0;
}
