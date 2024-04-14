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
    void solve(TreeNode *root,int &sum,bool flag){
        if(root==NULL ) return;
        if(root->left==NULL && root->right==NULL && flag==true){
            sum+=root->val;
            
        }
        if(root->left){
            
            solve(root->left,sum,true);
            
        }
        if(root->right!=NULL){
            solve(root->right,sum,false);
            
        }
        
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bool flag=false;
        solve(root,sum,flag);
        return sum;
        
    }
};