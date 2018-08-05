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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL; // without this line, RE
        ListNode* curr=head;
        while(curr->next!=NULL){
            while(curr->next!=NULL&&curr->next->val==curr->val) curr->next=curr->next->next; // while, not if
            if(curr->next!=NULL) curr=curr->next;
        }
        return head;
    }
};
