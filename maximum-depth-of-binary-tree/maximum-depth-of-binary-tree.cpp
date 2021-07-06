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
    int maxDepth(TreeNode* root) {
        int d = 0;
        return calcDepth(root, d);
    }
    int calcDepth(TreeNode* root, int &depth){
        if(root == NULL)
            return depth;
        int ans1 = 0;
        int ans2 = 0;
        if(root->left){
            depth += 1;
            ans1 = calcDepth(root->left, depth);
        }
        if(root->right)
            ans2 = calcDepth(root->right, depth);
        return max(ans1, ans2) + 1;
    }
};