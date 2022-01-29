/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_set<ListNode*> unique_nodes;
        ListNode* it = head;
        while(it!= NULL){
            if(unique_nodes.find(it) != unique_nodes.end()){
                return true;
            }
            unique_nodes.insert(it);
            it = it->next;
        }
        return false;
    }
};