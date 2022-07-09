#include<bits/stdc++.h>
using namespace std;


 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    int count(ListNode* head){
        int c=0;
        ListNode* p=head;
        while(p!=NULL){
            p=p->next;
            c+=1;
        }
        return c;
        
    }
    ListNode* middleNode(ListNode* head) {
        int Count=count(head);
        ListNode* ptr=head;
        ListNode* q=head;
        for(int i=0;i<(Count/2);i++){
            q=ptr;
            ptr=ptr->next;
        }
       
        return ptr;
        
    }
};