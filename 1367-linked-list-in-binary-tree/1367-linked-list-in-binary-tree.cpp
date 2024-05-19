/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool check(TreeNode *root,ListNode *temp){
        if(!temp) return true;
       
        if(!root || !temp) return false;
        
        if(root->val!=temp->val) return false;
        
        bool leftAns=check(root->left,temp->next);
        bool rightAns=check(root->right,temp->next);
        
        return leftAns || rightAns;
        
        
        
        
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(!q.empty()){
            TreeNode *frontNode=q.front();
            q.pop();
            if(frontNode->left) q.push(frontNode->left);
            if (frontNode->right) q.push(frontNode->right);
            
            
            if(frontNode->val==head->val){
                ListNode *temp=head;
                bool ans=check(frontNode,temp);
                if(ans) return true;
            }
        }
        
        return false;
        
    }
};