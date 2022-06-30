#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    /* data */
    int val;
    ListNode* next;
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode *temp;
        temp = head;
        // 1st
        int i=0;
        int temp_i=0;
        while(temp != NULL){
            if(i>temp_i){
                ans = ans*2;
            }
            ans = ans + temp->val * pow(2,0);
            temp = temp->next;
            temp_i = i;
            i++;
        }  
        // 2nd
        while(temp != NULL){
            ans*=2;
            ans+=(temp->val);
            temp = temp->next;
        }

        return ans;
    }
};