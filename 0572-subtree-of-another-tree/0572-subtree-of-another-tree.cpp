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
    void tree2string(TreeNode* root, string& s){
        
        if(root==NULL){
            s = s + "*";
            return;
        }
        s = s + ",";
        s = s + to_string(root->val);
        tree2string(root->left, s);
        tree2string(root->right, s);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string s_root = "";
        tree2string(root, s_root);
        string s_subRoot = "";
        tree2string(subRoot, s_subRoot);
        if(s_root.find(s_subRoot)!=s_root.npos) return true;
        else return false;
    }
};