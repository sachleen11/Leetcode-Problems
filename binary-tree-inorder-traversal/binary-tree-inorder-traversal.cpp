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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> traversal;
        inorderRec(traversal, root);
        return traversal;
    }
    void inorderRec(vector<int> &traversal, TreeNode* root){
        if(root == NULL)
            return;
        if(root->left != NULL)
            inorderRec(traversal, root->left);
        traversal.push_back(root->val);
        if(root->right!= NULL)
            inorderRec(traversal, root->right);
    }
};