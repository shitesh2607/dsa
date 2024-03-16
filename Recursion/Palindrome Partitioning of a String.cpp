// #include<bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string str){
//     int left=0;
//     int right = str.size()-1;
//     while(left<right)
//     {
//         /* code */
//         char leftchar = str.at(left);
//         char rightchar = str.at(right);
//         if(left != right){
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// void sol(string str, string asf){
//     if(str.size()==0){
//         cout<<asf<<endl;
//         return;
//     } 
//     for(int i=0;i<str.size();i++){
//         string prefix = str.substr(0,i+1);
//         string restOfString = str.substr(i+1);
//         if(isPalindrome(prefix)){
//             // asf=asf + "(" + prefix + ") ";
//             sol(restOfString, asf + "(" + prefix + ") ");
//         }
        
//     }
// }
// int main(){
//     string str = "abaaba";
//     int n = str.size();
//     sol(str, "");
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int left=0;
    int right = str.size()-1;
    while(left<right)
    {
        /* code */
        char leftchar = str.at(left);
        char rightchar = str.at(right);
        if(left != right){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void sol(string str, string asf, vector<string> list){
    if(str.size()==0){
        for(auto x:list){
            cout<<x<<" ";
        }
        return;
    }

    for(int i=0;i<str.size();i++){
        string prefix = str.substr(0, i+1);
        string restOfString = str.substr(i+1);
        if(isPalindrome(prefix)){
            // asf=asf + "(" + prefix + ") ";
            list.push_back(prefix);
            sol(restOfString, asf + "(" + prefix + ") ", list);
            list.pop_back();
        }
        
    }
}

int main(){
    vector<string> list;
    string str = "abaaba";
    int n = str.size();
    sol(str, "", list);
    return 0;
}
