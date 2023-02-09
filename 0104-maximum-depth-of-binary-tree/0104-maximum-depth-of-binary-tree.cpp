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
    int dfs(TreeNode* node, int depth){
        if(node->left==NULL && node->right==NULL) return depth;
        else if(node->left==NULL && node->right!=NULL) return dfs(node->right, depth+1);
        else if(node->left!=NULL && node->right==NULL) return dfs(node->left, depth+1);
        else return max(dfs(node->left, depth+1), dfs(node->right, depth+1));
    }
    
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        else return dfs(root, 1);
    }
};