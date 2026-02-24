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
    int s=0;
    void solve(TreeNode* root,string tmp){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            tmp+=to_string(root->val);
            if(!tmp.empty()){
                s+=stoi(tmp, nullptr, 2);
                tmp.pop_back();
            } 
            return;
        }
        tmp+=to_string(root->val);
        solve(root->left,tmp);
        solve(root->right,tmp);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        string tmp=""; 
        solve(root,tmp);
        return s;
    }
};