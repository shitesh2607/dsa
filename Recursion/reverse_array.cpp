

#include <bits/stdc++.h>
using namespace std;


vector<int> fun(vector<int>a, int i, int j){
    if(i>=j){
        return a; 
    }
    swap(a[i], a[j]);
    return fun(a, i+1, j-1);
}

int main()
{
    vector<int>a{1, 2, 32, 4, 5, 6};
    int len = a.size();
    a = fun(a, 0, len-1);
    for(auto x:a){
        cout<<x<<endl;
    }

    return 0;
}
