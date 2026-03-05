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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int>ans;
            for(int i=0;i<l;i++){
                TreeNode*tmp=q.front();
                q.pop();
                ans.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            res.push_back(ans);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};