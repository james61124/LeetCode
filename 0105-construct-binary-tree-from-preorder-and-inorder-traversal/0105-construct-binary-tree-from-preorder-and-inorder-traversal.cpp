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
    map<int, int>mp;
    int pos = -1;

    TreeNode* construct(vector<int>&preorder, int start, int end){
        pos++;
        TreeNode* head = new TreeNode(preorder[pos]);
        // cout<<preorder[pos]<<endl;
        int inorder_index = mp[preorder[pos]];
        if(inorder_index - start>0){
            head->left = construct(preorder, start, inorder_index - 1);
        }
        if(end - inorder_index > 0){
            head->right = construct(preorder, inorder_index + 1, end);
        }
        return head;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        return construct(preorder, 0, preorder.size()-1);
        
    }
};