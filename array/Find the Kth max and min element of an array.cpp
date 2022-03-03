#include <bits/stdc++.h>
using namespace std;
// approach1 : first sort in array then find the particular element nlog(N)
// approach2: max heap and min heap,(N+K)

int main()
{
    int TC;
    cin>>TC;
    while(TC--){
        string s;
        cin>>s;
        int start =0;
        int end = s.size()-1;
        while(start<(s.size()/2)){
            swap(s.at(start), s.at(end));
            start++;
            end = end-start;
        }
        cout<<s<<endl;
    }
    
    return 0;
}


