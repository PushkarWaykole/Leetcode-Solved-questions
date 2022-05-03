#include<bits/stdc++.h>
#include<vector.h>
#include<set.h>


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
    
    void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    ListNode* ptr;
    temp->val = item;
    temp->next = NULL;
 
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> unique;
        ListNode *temp=head;
        while(temp!=NULL){
            unique.insert(temp->val);
            temp=temp->next;
            
        }
        
        head=NULL;
        for(auto it:unique){
                insert(&head,it);
        }
        return head;
    }
};