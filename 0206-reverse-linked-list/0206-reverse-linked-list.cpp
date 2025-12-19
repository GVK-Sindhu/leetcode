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
    ListNode* reverseList(ListNode* head) {
        ListNode* prv=NULL;
        ListNode* tmp=head;
        while(tmp!=NULL){
            ListNode* nxt=tmp->next;
            tmp->next=prv;
            prv=tmp;
            tmp=nxt;
        }
        return prv;
    }
};