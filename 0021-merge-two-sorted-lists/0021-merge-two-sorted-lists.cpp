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
        ListNode* tmp1=list1;
        ListNode* tmp2=list2;
        ListNode*dummy=new ListNode(-1);
        ListNode*cur=dummy;
        while(tmp1!=NULL && tmp2!=NULL){
            if(tmp1->val<tmp2->val){
                cur->next=tmp1;
                tmp1=tmp1->next;
                cur=cur->next;
            }
            else{
                cur->next=tmp2;
                tmp2=tmp2->next;
                cur=cur->next;
            }
        }
        while(tmp1!=NULL){
            cur->next=tmp1;
            tmp1=tmp1->next;
            cur=cur->next;
        }
        while(tmp2!=NULL){
            cur->next=tmp2;
            tmp2=tmp2->next;
            cur=cur->next;
        }
        return dummy->next;
    }
};