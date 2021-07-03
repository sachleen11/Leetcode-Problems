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
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            return ;
        TreeNode* temp = root;
        while(temp!= NULL){
            if(temp->left != NULL ){
                TreeNode* pre_temp = temp->left;
                while(pre_temp->right){
                    pre_temp = pre_temp -> right;
                }
                pre_temp -> right = temp -> right;
                temp -> right = temp -> left;
                temp -> left = NULL;

            }
            temp = temp -> right;
        }
    }
};