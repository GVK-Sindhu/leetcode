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
    ListNode* reverselist(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* prv=NULL;
        ListNode* tmp=head;
        while(tmp!=NULL){
            ListNode*nxt=tmp->next;
            tmp->next=prv;
            prv=tmp;
            tmp=nxt;
        }
        return prv;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->ext;
        }
        ListNode*newhead=reverselist(slow->next);
        slow=head;
        fast=newhead;
        while(fast!=NULL){
            if(slow->val!=fast->val) {
                reverselist(newhead);
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        reverselist(newhead);
        return true;
    }
};