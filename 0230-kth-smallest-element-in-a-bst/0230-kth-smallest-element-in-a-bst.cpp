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
    int cur = 1;
    int ans = 0;
    int is_ans = 0;
    void dfs(TreeNode* root, int k){
        if(root==NULL) return;
        dfs(root->left, k);
        if(is_ans == 1) return;
        if(cur==k){
            ans = root->val;
            is_ans = 1;
            return;
        }
        cur++;
        dfs(root->right, k);
        
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        dfs(root, k);
        return ans;
    }
};