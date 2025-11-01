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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* tmp=head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prv=dummy;
        sort(nums.begin(),nums.end());
        while(tmp!=NULL){
            if(binary_search(nums.begin(),nums.end(),tmp->val)){
                prv->next=tmp->next;
            }
            else{
                prv=tmp;
            }
            tmp=tmp->next;
        }
        return dummy->next;
    }
};