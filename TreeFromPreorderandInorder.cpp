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
    TreeNode * solve(vector<int> &preorder,int p_start,int p_end,vector<int> &inorder,int i_start,int i_end,map<int,int> &mp){
       if(p_start > p_end or i_start > i_end)
           return NULL;
        TreeNode * root=new TreeNode(preorder[p_start]);
        int el=mp[root->val];
        int nel=el-i_start;
        root->left=solve(preorder,p_start+1,p_start+nel,inorder,i_start,el-1,mp);
        root->right=solve(preorder,p_start+nel+1,p_end,inorder,el+1,i_end,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int p_start=0,p_end=preorder.size()-1;
        int i_start=0,i_end=inorder.size()-1;
        map<int,int> mp;
        for(int i=0;i<=i_end;i++)
            mp[inorder[i]]=i;
        return solve(preorder,p_start,p_end,inorder,i_start,i_end,mp);
    }
};