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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        ListNode* merged = new ListNode();
        ListNode* head3 = merged;
        while(head1 != nullptr && head2 != nullptr){
            if(head1->val < head2->val){
                ListNode* temp = new ListNode();
                temp-> val = head1-> val;
                head1 = head1->next;
                head3->next = temp;
            }
            else {
                ListNode* temp = new ListNode();
                temp-> val = head2-> val;
                head2 = head2->next;
                head3->next = temp;
            }
            head3 = head3->next;
        }
        while(head1 != nullptr){
            ListNode* temp = new ListNode();
            temp->val = head1->val;
            head3->next = temp;
            head1 = head1->next;
            head3 = head3->next;
        }
        while(head2 != nullptr){
            ListNode* temp = new ListNode();
            temp->val = head2->val;
            head3->next = temp;
            head2 = head2->next;
            head3 = head3->next;
        }
        return merged->next;
    }
};