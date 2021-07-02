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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> traversal;
        preorderRec(traversal, root);
        return traversal;
    }
    void preorderRec(vector<int> &traversal, TreeNode* root){
        if(root == NULL)
            return;
        traversal.push_back(root->val);
        if(root->left != NULL)
            preorderRec(traversal, root->left);
        if(root->right!= NULL)
            preorderRec(traversal, root->right);
    }
};