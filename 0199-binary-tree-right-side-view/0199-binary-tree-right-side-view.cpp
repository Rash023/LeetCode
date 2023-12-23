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
    void solve(TreeNode *root,int level,vector<int> &rightview){
        if(root==NULL){
            return;
        }
        
        if(level==rightview.size()){
            rightview.push_back(root->val);
        }
        
        solve(root->right,level+1,rightview);
        solve(root->left,level+1,rightview);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        vector<int> rightview;
        solve(root,level,rightview);
        return rightview;
    }
};