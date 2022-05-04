//Link to explaination
//https://www.youtube.com/watch?v=DAIN1ZzvFeA

#include<bits/stdc++.h>
#include<vector.h>


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<int> result;
    void helperPreorder(Node* root,vector<int>& result){
        result.push_back(root->val);
        
        for (int i=0;i<root->children.size();i++){
            helperPreorder(root->children[i],result);
        }
    }
    
    vector<int> preorder(Node* root) {
        if(root==NULL) return result;
        helperPreorder(root,result);
        return result;
    }
};