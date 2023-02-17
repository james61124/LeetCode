
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string r = "", s = "";
        tree2string(root, r);
        tree2string(subRoot, s);
        if(r.find(s) != string::npos) return true;
        else return false;
    }
    void tree2string(TreeNode* node, string& str){ // preorder
        if(!node){
            str += "#";
            return;
        }
        str += ","; // seperate each node
        str += to_string(node->val);
        tree2string(node->left, str);
        tree2string(node->right, str);
    }
};
