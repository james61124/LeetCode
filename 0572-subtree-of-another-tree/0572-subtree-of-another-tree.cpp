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
    string tree2string(TreeNode* root, string s){
        s = s + ",";
        if(root==NULL){
            s = s + "*";
            return s;
        }
        s = s + to_string(root->val);
        s = tree2string(root->left, s);
        s = tree2string(root->right, s);
        return s;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string s_root = tree2string(root, "");
        string s_subRoot = tree2string(subRoot, "");
        if(s_root.find(s_subRoot)!=s_root.npos) return true;
        else return false;
    }
};