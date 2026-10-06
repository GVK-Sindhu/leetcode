/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)) {
            return false;
        }
        if(p==NULL && q==NULL){
            return true;
        }
        if(p->val!=q->val){
            return false;
        }
        bool left=true,right=true;
        if(p->val==q->val){
            if(p->left || q->left){
                left=isSameTree(p->left,q->left);
            }
            if(p->right || q->right){
                right=isSameTree(p->right,q->right);
            }
        }
        cout<<left <<" "<<right<<" ";
        return left&&right;
        // return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};