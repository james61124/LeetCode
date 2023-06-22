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
    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL || root->val==p->val || root->val==q->val) return root;
        TreeNode* l = dfs(root->left,p,q);
        TreeNode* r = dfs(root->right,p,q);
        if(l!=NULL && r!=NULL) return root;
        if(l!=NULL) return l;
        else return r;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }
};