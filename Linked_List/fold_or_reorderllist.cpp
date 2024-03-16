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
//     finding middle of linklist
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseOfLinkedList(ListNode* head){
        if(head==NULL || head->next==NULL)return head;
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* forwd = head->next;
        while(cur != NULL){
            cur->next = prev;
            prev = cur;
            cur = forwd;
            if(cur!=NULL)
                forwd = forwd->next;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(head==NULL || head->next ==NULL)return;
        ListNode* middleNode = findMid(head);
        ListNode* newhead = reverseOfLinkedList(middleNode->next);
        middleNode->next = NULL;
        
        ListNode* c1 = head;
        ListNode* c2 = newhead;
        ListNode* f1 = NULL;
        ListNode* f2 = NULL;
        
        while(c2!=NULL){
//             backups
            f1 = c1->next;
            f2 = c2->next;
//             links
            c1->next = c2;
            c2->next = f1;
//             moves
            c1 = f1;
            c2 = f2;
        }
    }
};


class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()<=0){
            return "";
        }

        stack<string>st;
        string str = "";
        for(int i=0;s.size()<i;i++){
            if(st.size()>0 && s[i]==st.top()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){
            str = str+st.top();
            st.pop();
        }

        return str;

    }
};