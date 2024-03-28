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
    int count=0;
    int paths(TreeNode* root,int t,long long s){
        if(root==NULL) return 0;
        if(s+root->val==t) return 1+paths(root->left,t,s+root->val)+paths(root->right,t,s+root->val);
        return paths(root->left,t,s+root->val)+paths(root->right,t,s+root->val);
    }
    void dfs(TreeNode* root,int t){
        if(root==NULL) return;
        count+=paths(root,t,0);
        dfs(root->left,t);
        dfs(root->right,t);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return count;
    }
};