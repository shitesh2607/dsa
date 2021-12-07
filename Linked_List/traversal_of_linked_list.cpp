#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 class solution{
     public:
     void traversal(ListNode* node){
         ListNode* temp = node;
         while(temp != NULL){
             cout<<temp->val<<endl;
             temp = temp->next;
         }
     }

 };