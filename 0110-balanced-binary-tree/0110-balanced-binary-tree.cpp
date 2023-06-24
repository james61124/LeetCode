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
    bool ans = true;
    int dfs(TreeNode* root, int layer){
        if(root==NULL) return layer;
        if(ans==false) return layer;
        int left = dfs(root->left, layer+1);
        int right = dfs(root->right, layer+1);
        if(abs(right-left)>1) ans = false;
        return max(left, right);
    }
    
    bool isBalanced(TreeNode* root) {
        int height = dfs(root, 0);
        return ans;
    }
};