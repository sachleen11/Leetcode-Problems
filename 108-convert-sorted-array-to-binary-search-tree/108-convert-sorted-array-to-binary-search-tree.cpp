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
    
    TreeNode* insert_BST(vector<int> nums, int start, int end){
        if(start > end)
            return NULL;
        int mid = (start + end)/2;
        TreeNode* r = new TreeNode(nums[mid]);
        r->left = insert_BST(nums, start, mid - 1);
        r->right = insert_BST(nums, mid+1, end);
        return r;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return insert_BST(nums, 0, nums.size() - 1);
    }
};