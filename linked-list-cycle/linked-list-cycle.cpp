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
        unordered_set <ListNode*> adrs; 
        while(head!=NULL){
            if(adrs.find(head) != adrs.end())
                return true;
            adrs.insert(head);
            head = head->next;
        }
        return false;
    }
};