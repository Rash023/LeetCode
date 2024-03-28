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
    int maxLen=0;
    
    void solve(TreeNode *root,int steps,bool goLeft){
        if(root==NULL){
            return;
            
        }
        maxLen=max(maxLen,steps);
        
        if(goLeft){
            solve(root->left,steps+1,false);
            solve(root->right,1,true);
            
        }
        else{
            solve(root->left,1,false);
            solve(root->right,steps+1,true);
            
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root,0,true);
        solve(root,0,false);
        
        return maxLen;
        
    }
};