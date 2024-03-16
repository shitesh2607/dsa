#include<bits/stdc++.h>
using namespace std;

void generatePermutaions(int i, int n, unordered_map<char, int> freq, string oddChar, string asf){
    if(i>n){
        string rev = "";
        for(int i = asf.size()-1;i>=0;i--){
            rev +=asf[i];
        }
        string res = asf;
        if(oddChar != ""){
            res+=oddChar;
        }
        res+=rev;
        cout<<res<<endl;
        return;
    }
    
    for(auto x:freq){
        int freqCount = freq[x.first];
        if(freqCount>0){
            freq[x.first] = freqCount-1;
            generatePermutaions(i+1, n, freq, oddChar, asf+x.first);
            freq[x.first] = freqCount+1;
        }
        
    }
}


int main(){
    string str = "ababababccc";
    unordered_map<char, int> freq;
    int n =str.size();

    // taking frequency
    for(int i=0;i<n;i++){
        freq[str[i]]= freq[str[i]]+1;
    }
    // mking half freq and counting charater with odd no frequency
    int oddCount =0;
    string oddChar="";
    for(auto x:freq){
        freq[x.first] = x.second/2;
        if(freq[x.first]%2 != 0){
            oddCount+=1;
            oddChar = x.first;
        }
    }
     
    generatePermutaions(1, n, freq, oddChar, "");
}