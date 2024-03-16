#include<bits/stdc++.h>
using namespace stdc;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* find_middle(ListNode* head){
        ListNode* l = head;
        ListNode* h = head;
        while(h != NULL && h->next !=NULL){
            l = l->next;
            h = h->next->next;
        }
        return l;
    }
    
     ListNode* reverseList(ListNode* &head)
    {
        if(head==NULL)return NULL;
        ListNode *p=NULL, *c=head, *n=head->next;
        while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL)
                n = n->next;
        }
        return p;
    }
    void ll(ListNode* head){
        while(head!=NULL){
            cout<<head->val;
            head = head->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middle = find_middle(head);
        ListNode* reverse = reverseList(middle);
        // ll(reverse);
        while(reverse != NULL){
            if(head->val != reverse->val){
                return false;
            }
            head= head->next;
            reverse=reverse->next;
        }
        return true;
    }
};