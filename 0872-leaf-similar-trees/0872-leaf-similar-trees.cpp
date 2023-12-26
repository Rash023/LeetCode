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
    void solve(TreeNode *temp,vector<int> &leaf1){
        if(temp==NULL) return;
        
        if(temp->left==NULL && temp->right==NULL){
            leaf1.push_back(temp->val);
        }
        
        solve(temp->left,leaf1);
        solve(temp->right,leaf1);
        
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        solve(root1,leaf1);
        solve(root2,leaf2);
        
        return leaf1==leaf2;
        
    }
};