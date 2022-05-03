 #include<bits.stdc++.h>
 //Definition for a binary tree node.
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
    vector<int> nodes;
    void inorder(TreeNode* root,vector<int>& nodes){
        if(root==NULL){
            return;
        }
        inorder(root->left,nodes);
        nodes.push_back(root->val);
        inorder(root->right,nodes);
    }
    bool findTarget(TreeNode* root, int k) {
        bool found=false;
        inorder(root,nodes);
        for(int i=0;i<nodes.size();i++){
            for(int j=i+1;j<nodes.size();j++){
                if(nodes[i]+nodes[j]==k){
                    found=true;
                }
            }
        }
        return found;
    }
};