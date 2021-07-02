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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> traversal;
        postorderRec(traversal, root);
        return traversal;
    }

    void postorderRec(vector<int> &traversal, TreeNode* root){
        if(root == NULL)
            return;
        if(root->left != NULL)
            postorderRec(traversal, root->left);
        if(root->right!= NULL)
            postorderRec(traversal, root->right);
        traversal.push_back(root->val);

    }
};