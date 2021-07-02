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
        stack<TreeNode*> traversalStack;
        vector<int> traversal;
        TreeNode* cur = root;
        while(true){
            if(cur != nullptr){
                traversalStack.push(cur);
                cur = cur -> left;
            }
            else if(!traversalStack.empty()){
                traversal.push_back(traversalStack.top()->val);
                cur = traversalStack.top()->right;
                traversalStack.pop();
            }
            else{
                break;
            }
        }
        return traversal;
    }
    
};