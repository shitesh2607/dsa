#include<bits/stdc++.h>
using namespace std;
 void print(int n){
     if(n==1){
         cout<<n<<endl;
         return;
     }
     print(n-1);
     cout<<n<<endl;
 }
 int main(){
     int m = 5;
     print(m);
 }