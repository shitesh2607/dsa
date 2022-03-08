#include <bits/stdc++.h>
using namespace std;
int palindrom(vector<int> &arr){
    int i=0;
    int j=arr.size()-1;
    int count=0;
    while(i<=j){
        if(arr.at(i)>arr.at(j)){
            j--;
            arr[j]=arr[j]+arr[j+1];
            count++;
        }else if(arr.at(i)==arr.at(j)){
            j--;
            i++;
        }else{
            i++;
            arr[i]=arr[i]+arr[i-1];
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int>arr{11, 4, 15, 99};
    int ans;
    ans = palindrom(arr);
    cout<<ans<<endl;
    for(auto &a:arr){
        cout<<a<<endl;
    }

    return 0;
}
