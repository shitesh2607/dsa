#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
    /* data */
    int val;
    ListNode* next;
};
class solution{
    public:
    // solution 1
    ListNode* middleNode(ListNode* head){
        int n=0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            n++;
        }
        int half = n/2;
        temp = head;
        while (half--)
        {
            temp = temp->next;
        }
        return temp;
    }
    
    // optimiized solution 2
    ListNode* solution2(ListNode* head){
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};