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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0){
            return head;
        }
        int n=0;
        ListNode*temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* tmp=head;
        int len=0;
        k=k%n;
        if(k==0) return head;
        while(len<(n-k-1)){
            tmp=tmp->next;
            len++;
        }
        ListNode*start=tmp->next;
        tmp->next=NULL;
        ListNode*starttmp=start;
        while(starttmp->next!=NULL){
            starttmp=starttmp->next;
        }
        starttmp->next=head;
        return start;
    }
};