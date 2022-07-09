#include<bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
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
        ListNode* list3=NULL;
        //using merge sort approach
        
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val<ptr2->val){
                addNode(&list3,ptr1->val);
                ptr1=ptr1->next;
            }
            else{
                addNode(&list3,ptr2->val);
                ptr2=ptr2->next;
            }
        }
        
        //if anyone of the lists gets exhausted
        while(ptr1!=NULL){
            addNode(&list3,ptr1->val);
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL){
            addNode(&list3,ptr2->val);
            ptr2=ptr2->next;
        }
        
        return list3;
        
    }
};