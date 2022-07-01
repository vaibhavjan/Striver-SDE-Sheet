/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode * root,vector<int> &tree)
    {
        if(root==NULL)
            return;
        tree.push_back(root->val);
        preorder(root->left,tree);
        preorder(root->right,tree);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> tree;
        preorder(root,tree);
        return tree;
    }
};