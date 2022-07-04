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
    
    void inorder(TreeNode * root,vector<int> & tree)
    {
        if(root==NULL)
            return;
        inorder(root->left,tree);
        tree.push_back(root->val);
        inorder(root->right,tree);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p1,p2;  
        inorder(p,p1);
        inorder(q,p2);
        if(p1.size()!=p2.size())
           return false;
         if(p1.size()==0 and p2.size()==0)
            return true;
        if(p1.size()==0 or p2.size()==0)
            return false;
       
        for(int i=0; i<p1.size();i++)
        {
            if(p1[i]!=p2[i])
                return false;
        }
        return true;
    }
};