#include <iostream>

using namespace std;
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/
int steps(int n, int step){
    if(n == 0){
        return step; 
    }
    if(n%2 ==0){
        return steps(n/2, step+1);
    }
    return steps(n-1, step+1);
}

int main()
{
    int ans;
    ans = steps(14, 0);
    cout<<ans;
    return ans;
}