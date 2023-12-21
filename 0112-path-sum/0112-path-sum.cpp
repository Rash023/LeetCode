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
    bool solve(TreeNode* root, int targetSum,int sum){
        if(root==NULL){
            return false;
            
        }
        
        sum+=root->val;
        if(root->right==NULL && root->left==NULL){
            if(sum==targetSum) return true;
            else return false;
        }
        
        bool rightans=solve(root->left,targetSum,sum);
        bool leftans=solve(root->right,targetSum,sum);
        
        return rightans||leftans;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool ans=solve( root,  targetSum, sum);
        return ans;
    }
};