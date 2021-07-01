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
    bool findPath(TreeNode* root, vector<int> &path, int target){
        if(root == NULL)
            return false;
        path.push_back(root->val);
        if(root->val == target){
            return true;
        }
        if(findPath(root->left, path, target)){
            return true;
        }
        if(findPath(root->right, path, target)){
            return true;
        }
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> pPath;
        vector<int> qPath;
        findPath(root, pPath, p->val);
        findPath(root, qPath, q->val);
        for(int j = 0; j < pPath.size(); j ++){
            cout << pPath[j] <<" ";
        }
        cout << endl;
        for(int j = 0; j < qPath.size(); j ++){
            cout << qPath[j] << " ";
        }
        int lower = min(pPath.size(), qPath.size());
        int i = 0;
        for(; i < lower; i++){
            if(pPath[i] != qPath[i])
                break;
        }
        TreeNode* ans = new TreeNode(pPath[i-1]);
        return ans;
    }
};