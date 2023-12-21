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
    int height(TreeNode *node){
        if(node==NULL){
            return 0;
        }
        
        int leftHeight=height(node->left);
        int rightHeight=height(node->right);
        int ans=max(leftHeight,rightHeight)+1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* node) {
        
        if(node==NULL){
            return true;
        }
        
        int leftHeight=height(node->left);
        int rightHeight=height(node->right);
        
        int diff=abs(leftHeight-rightHeight);
        
        bool leftTree=isBalanced(node->left);
        bool rightTree=isBalanced(node->right);
        
        bool difference= (diff<=1);
        
        if(difference && leftTree && rightTree){
            return true;
        }
        else{
            return false;
        }
        
    }
};