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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* tmp=dummy;
        int c=0;
        while(l1!=NULL || l2!=NULL || c){
            int s=0;
            if(l1){
                s+=l1->val;
                l1=l1->next;
            }
            if(l2){
                s+=l2->val;
                l2=l2->next;
            }
            s+=c;
            ListNode* node=new ListNode(s%10);
            c=s/10;
            tmp->next=node;
            tmp=tmp->next;
        }
        return dummy->next;
    }
};