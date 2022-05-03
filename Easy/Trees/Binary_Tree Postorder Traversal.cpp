#include<bits/stdc++.h>
#include<vector.h>
#include<set.h> 
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

typedef vector<int> vi;
class Solution {
public:
    void postorder(TreeNode* root,vi& nodes){
        if(root==NULL){
            return;
        }
        postorder(root->left,nodes);
        postorder(root->right,nodes);
        nodes.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vi nodes;
        postorder(root,nodes);
        return nodes;
    }
};