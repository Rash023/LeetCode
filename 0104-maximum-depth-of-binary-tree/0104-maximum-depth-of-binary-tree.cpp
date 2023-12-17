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
    int maxDepth(TreeNode* root) {
         if(root==NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        int cnt=0;
        
        while(!q.empty()){
            vector<int> v;
            int count=q.size();
            
            for(int i=0;i<count;i++){
               TreeNode* temp=q.front();
                v.push_back(temp->val);
                q.pop();
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                
            }
            
            cnt++;
        }
        
        return cnt;
    }
};