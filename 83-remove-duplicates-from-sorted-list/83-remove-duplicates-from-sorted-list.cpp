/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* it = head->next; 
        ListNode* prev = head; 
        
        while(it != NULL){
            if(it->val == prev->val){
                prev->next = it->next;
                it = it->next;
            }
            else{
                prev = it;
                it = it->next;
            }
        }
        
        return head;
    }
};