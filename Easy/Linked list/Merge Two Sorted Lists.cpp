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
    
    void addNode(ListNode** root,int item){
        ListNode* temp=new ListNode;
        ListNode* ptr;
        temp->val=item;
        temp->next=NULL;
        
        if(*root==NULL){
            *root=temp;
        }
        else{
            ptr=*root;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
            
        }
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> all;
        ListNode *temp=list1;
        ListNode *newHead=NULL;
        while(temp!=NULL){
            all.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL){
            all.push_back(temp->val);
            temp=temp->next;
        }
        sort(all.begin(),all.end());
        
        
        for(auto it:all){
            addNode(&newHead,it);
        }
        return newHead;
        
    }
};