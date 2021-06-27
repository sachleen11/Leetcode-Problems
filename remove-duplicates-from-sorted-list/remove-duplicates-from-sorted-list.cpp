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
        if(head == NULL || head->next==NULL)
            return head;
        ListNode* prevIt = head;
        ListNode* nextIt = head->next;
        while(nextIt != NULL){
            if(nextIt->val == prevIt->val){
                prevIt->next = nextIt->next;
                nextIt = nextIt->next;
            }
            else{
                prevIt = prevIt -> next;
                nextIt = nextIt -> next;
            }
        }
        return head;
    }
};