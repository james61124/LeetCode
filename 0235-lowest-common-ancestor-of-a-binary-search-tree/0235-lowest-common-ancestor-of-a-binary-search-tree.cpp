/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* search(TreeNode* root, TreeNode* p, TreeNode* q){
        TreeNode* ans = root;
        if(root == NULL) return root;
        
        if(p->val == root->val || q->val == root->val) ans = root;
        else if(p->val > root->val && q->val > root->val) ans = search(root->right, p, q);
        else if(p->val < root->val && q->val < root->val) ans = search(root->left, p, q);
        else return root;
        return ans;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return search(root, p, q);
    }
};