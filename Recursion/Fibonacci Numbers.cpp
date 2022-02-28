// 0, 1, 1, 2, 3, 5, 8, 13, 21, ..............

// recurance relation
// fib(n) = fib(n-1) + fib(n-2)
#include<bits/stdc++.h>
using namespace std;

// fibonacci numbers
 int fib(int n){
    //  base condition
     if(n<2){
        return n;
     }
     
     return fib(n-1)+fib(n-2);
 }
// print n to 1
void fun(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    fun(n-1);
}

// print 1 to n
void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<endl;
}

 int main(){
     int m = 5;
     cout<<fib(m)<<endl;
 }




