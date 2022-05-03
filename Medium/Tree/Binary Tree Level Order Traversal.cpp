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

class Solution {
public:
    vector<vector<int>> res;
    void buildTree(TreeNode *root,int depth){
        if(root==NULL) return;
        
        if(res.size()==depth){
            res.push_back(vector<int>());
        }
        res[depth].push_back(root->val);
        buildTree(root->left,depth+1);
        buildTree(root->right,depth+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        buildTree(root,0);
        return res;
    }
};