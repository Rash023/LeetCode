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
private:
    void solve(TreeNode *root,vector<vector<int>> &ans,vector<int> temp,int sum,int targetSum){
        if(root==NULL){
            return;
        }
        
        sum+=root->val;
        temp.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans.push_back(temp);
            }
            
        }
        
        solve(root->left,ans,temp,sum,targetSum);
        solve(root->right,ans,temp,sum,targetSum);
        
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        solve(root,ans,temp,sum,targetSum);
        return ans;
    }
};