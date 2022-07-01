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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long int>>q;
        q.push({root, 0});
     long long int start;
       long long int end;
        long long int width=0;
        
        while(!q.empty()){
          long long int sz = q.size();
              start = q.front().second;
                end = q.back().second;
                width = max(width, end-start+1);
            while(sz--){
              auto it = q.front();
                if(it.first->left) q.push({ it.first->left, 2*(it.second)+1 });
               if(it.first->right) q.push({ it.first->right, 2*(it.second)+2 });
                q.pop();
            }
        }
        
        return width;
    }
};