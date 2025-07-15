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
    int getDecimalValue(ListNode* head) {
        vector<int>s;
        ListNode* temp= head;
        while(temp!=NULL){
            s.push_back(temp->val);
            temp=temp->next;
        }
        reverse(s.begin(),s.end());
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==1) res+=pow(2,i);
        }                          
        return res;
    }
};