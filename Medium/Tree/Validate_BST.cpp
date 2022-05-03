#include<bits/stdc++.h>
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
    
    bool isBSTUtil(TreeNode* root, TreeNode *&prev)
{
    // traverse the tree in inorder fashion and 
    // keep track of prev node
    if (root)
    {
        if (!isBSTUtil(root->left, prev))
          return false;
    
        // Allows only distinct valued nodes 
        if (prev != NULL && root->val <= prev->val)
          return false;
    
        prev = root;
    
        return isBSTUtil(root->right, prev);
    }
    
    return true;
}
   
bool isValidBST(TreeNode *root)
{
   TreeNode *prev = NULL;
   return isBSTUtil(root, prev);
}
};