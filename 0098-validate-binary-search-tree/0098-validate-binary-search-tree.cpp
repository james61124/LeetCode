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
    int cur = NULL;
    int is_cur = 0;
    bool dfs(TreeNode* root){
        if(root==NULL) return true;
        bool left = dfs(root->left);
        // cout<<root->val<<cur<<endl;
        if(is_cur==1 && root->val <= cur) return false;
        cur = root->val;
        is_cur = 1;
        bool right = dfs(root->right);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        // cout<<cur<<endl;
        return dfs(root);
    }
};