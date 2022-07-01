/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool helper(TreeNode *root,int x,vector<int> &ans){
    if(root==NULL)
        return false;
    ans.push_back(root->val);
    if(root->val==x)
        return true;
    if(helper(root->left,x,ans))
        return true;
    if(helper(root->right,x,ans))
        return true;
    ans.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* root, int x) {
    vector<int> ans;
    helper(root,x,ans);
    return ans;
}
