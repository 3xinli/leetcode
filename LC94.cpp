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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root,result);
        return result;
    }
    void traversal(TreeNode* root,vector<int>& result)
    {
        if(root==NULL)
            return;   
        traversal(root->left,result);
        result.push_back(root->val);
        traversal(root->right,result);
    }
};
