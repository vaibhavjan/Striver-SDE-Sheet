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
    int postIndex;
    unordered_map<int,int> m;
    
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int start,int end) {
        if(start>end)   return NULL;    
        int val = postorder[postIndex--];
        TreeNode* root= new TreeNode(val);
        int index = m[val];
        root->right = helper(inorder,postorder,index+1,end);
        root->left = helper(inorder,postorder,start,index-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        postIndex=n-1;
        int start=0,end=n-1;
        for(int i=0;i<n;i++) m[inorder[i]]=i; 
        return helper(inorder,postorder,start,end);
    }
};