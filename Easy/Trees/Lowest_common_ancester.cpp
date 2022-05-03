
//Link to yt video for explaination
//https://www.youtube.com/watch?v=cX_kPV_foZc


#include<bits/stdc++.h>
 //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        int current_val=root->val;
        if(p-> val < current_val && q->val < current_val){
            return lowestCommonAncestor(root->left,p,q);
        }
        if(p-> val > current_val && q->val > current_val){
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};