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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>res;
        int maxlevel=INT_MIN;
        while(!q.empty()){
            q.push(root);
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=(q.front()->val);
                TreeNode* dummy=q.front();
                q.pop();
                if(dummy->left){
                    q.push(dummy->left);
                }
                if(dummy->right){
                    q.push(dummy->right);
                }
                res.push_back(sum);
            }
        }
        for(auto it:res){
            cout<<it<<" ";
        }
        maxlevel=max_element(res.begin(),res.end())-res.begin();
        return maxlevel+1;
    }
};