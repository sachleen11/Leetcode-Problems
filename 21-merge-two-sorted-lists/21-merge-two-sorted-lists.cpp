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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head3 = new ListNode();
        ListNode* list3 = head3;
        
        while(list1 != NULL && list2 != NULL){
            if(list1 -> val <= list2 -> val){
                ListNode* temp = new ListNode(list1->val);
                list3 -> next = temp;
                list3 = list3 -> next;
                list1 = list1 -> next;
            }
            else{
                ListNode* temp = new ListNode(list2->val);
                list3 -> next = temp;
                list3 = list3 -> next;
                list2 = list2 -> next;
            }
        }
        
        while(list1 != NULL){
            ListNode* temp = new ListNode(list1->val);
            list3 -> next = temp;
            list1 = list1->next;
            list3 = list3->next;
        }
        
        while(list2 != NULL){
            ListNode* temp = new ListNode(list2->val);
            list3 -> next = temp;
            list2 = list2->next;
            list3 = list3->next;
        }
        
        return head3 -> next;
    }
};