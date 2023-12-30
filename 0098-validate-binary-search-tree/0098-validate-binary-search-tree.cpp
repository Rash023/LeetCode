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
    bool solve(TreeNode *root,long long lowerBound,long long upperBound){
        if(root==NULL) return true;
        
        bool cond1=(root->val<upperBound);
        bool cond2=(root->val>lowerBound);
        
        bool leftAns=solve(root->left,lowerBound,root->val);
        bool rightAns=solve(root->right,root->val,upperBound);
        
        return (cond1 && cond2 && leftAns && rightAns);
        
    }
public:
    bool isValidBST(TreeNode* root) {
        
        long long lowerBound=-2147483747;
        long long upperBound=2147483677;
        
        bool ans=solve(root,lowerBound,upperBound);
        
        return ans;
        
        
        
    }
};