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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == NULL) return NULL;
        int len=0;
        ListNode *tmp=head;
        while(tmp!=NULL){
            tmp=tmp->next;
            len++;
        }
        tmp=head;
        int mid=len/2;
        for(int i=0;i<mid-1;i++){
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};