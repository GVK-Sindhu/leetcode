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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*tmp=head;
        int c=0;
        while(tmp!=nullptr){
            tmp=tmp->next;
            c++;
        }
        int x=c-n;
        if(x==0){
            ListNode* newh=head->next;
            delete head;
            return newh;
        }
        tmp=head;
        int c1=1;
        while(c1<x){
            tmp=tmp->next;
            c1++;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};