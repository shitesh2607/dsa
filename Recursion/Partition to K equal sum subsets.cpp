#include<bits/stdc++.h>
using namespace std;
bool flag =true;
void sol(int i, int k, vector<int> nums, int nos, vector<int> asf){
    
    if(i==nums.size()){
        if(nos==k){
            // for(int a=0;a<asf.size();a++){
            //     if(asf[a]!=asf[a+1]){
            //         flag = false;
            //         break;
            //     }
            // }
            for(auto a:asf){
                cout<<a<<" ";
            }
            cout<<endl;
        }
        return;
    }


    for(int j=0; j<asf.size();j++){
        if(asf[j]>0){
            asf[j] = asf[j]+nums[i];
            sol(i+1, k, nums, nos, asf);
            asf[j] = asf[j]-nums[i];
        }else{
            asf[j] = asf[j]+nums[i];
            sol(i+1, k, nums, nos+1, asf);
            asf[j] = asf[j]-nums[i];
            break;
        }
    }
}

int main(){
    int K = 3;
    vector<int> nums{1,6,2,5,3,4};
    vector<int> array(K,0);
    // non empty set
    int nos = 0;
    sol(0, K, nums, nos, array);
return 0;
}

