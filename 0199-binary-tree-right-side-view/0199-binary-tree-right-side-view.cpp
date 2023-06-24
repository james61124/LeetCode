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
    vector<int>ans;
    int cur = 0;
    void dfs(TreeNode* root, int layer){
        if(root==NULL) return;
        if(cur<=layer){
            ans.push_back(root->val);
            cur++;
        }
        dfs(root->right, layer+1);
        dfs(root->left, layer+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};