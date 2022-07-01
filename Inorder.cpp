class Solution {
public:
    void inorder(TreeNode * root,vector<int> &vaibhav)
    {
        if(root==NULL)
            return;
        inorder(root->left,vaibhav);
        vaibhav.push_back(root->val);
        inorder(root->right,vaibhav);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vaibhav;
        inorder(root,vaibhav);
        return vaibhav;
    }
};