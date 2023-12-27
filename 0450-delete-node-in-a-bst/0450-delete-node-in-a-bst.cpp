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
    TreeNode *maxValue(TreeNode *root){
        if(root->right==NULL){
            return root;
        }
        
        return maxValue(root->right);
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        
        if(root->val==key){
            //case 1
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            
            //case 2
            else if(root->left!=NULL && root->right==NULL){
                TreeNode *childSubtree=root->left;
                delete root;
                return childSubtree;
            }
            //case 3
            
            else if(root->left==NULL && root->right!=NULL){
                TreeNode *childSubtree=root->right;
                delete root;
                return childSubtree;
            }
            else{
                TreeNode *maxi=maxValue(root->left);
                root->val=maxi->val;
                root->left=deleteNode(root->left,maxi->val);
                return root;
            }
        }
        
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        
        else{
            root->right=deleteNode(root->right,key);
            
        }
        
        
        return root;
    }
};