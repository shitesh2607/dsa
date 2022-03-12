#include<bits/stdc++.h>
using namespace std;

int power(long long int x, long long int n){
    if(n==0){
        return 1;
    }
    long long int a = power(x, n/2);
    long long int an = a*a;

    if(n%2==1){
        an = an*x;
    }
    
    return an;
}

int main()
{
    
    long long int ans;
    ans = power(5, 5);
    cout<<ans<<endl;
    return 0;
}