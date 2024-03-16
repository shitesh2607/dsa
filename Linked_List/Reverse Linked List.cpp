 #include<bits/stdc++.h>
 using namespace std;
struct ListNode{
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        if(head==NULL)return NULL;
        ListNode *prev=NULL, *cur=head, *forwd=head->next;
        while(cur!=NULL){
            cur->next = prev;
            prev = cur;
            cur = forwd;
            if(cur!=NULL)
                forwd = forwd->next;
        }
        return prev;
    }
};