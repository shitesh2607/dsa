#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        long long int start =0;
        long long int end = s.size()-1;
        while(start<end){
            swap(s.at(start), s.at(end));
            start++;
            end--;
        }
    }