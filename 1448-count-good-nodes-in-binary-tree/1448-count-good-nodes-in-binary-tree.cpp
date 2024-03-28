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
    int goodNodes(TreeNode* root) {
        int cnt=1;
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty()){
            TreeNode *frontNode=q.front();
            q.pop();
            
            if(frontNode->left!=NULL){
                if(frontNode->left->val>=frontNode->val){
                    cnt++;
                }
                else{
                    frontNode->left->val=frontNode->val;
                    
                }
                q.push(frontNode->left);
                
                
                
            }
            if(frontNode->right!=NULL){
                if(frontNode->right->val>=frontNode->val){
                    cnt++;
                }
                else{
                    frontNode->right->val=frontNode->val;
                    
                }
                q.push(frontNode->right);
                
                
                
            }
            
            
        }
        
        return cnt;
        
    }
};