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
    int search(vector<int> &inorder,int &size,int element){
        for(int i=size-1;i>=0;i--){
            if(inorder[i]==element){
                return i;
            }
            
            
        }
        
        return -1;
    }
    TreeNode *solve(vector<int> &inorder,vector<int> &postorder,int &size,int &postIndex,int inStart,int inEnd){
        if(postIndex<0 || inStart>inEnd){
            return NULL;
        }
        
        int element=postorder[postIndex];
        postIndex--;
        
        int position=search(inorder,size,element);
        
        TreeNode *root=new TreeNode(element);
        
        root->right=solve(inorder,postorder,size,postIndex,position+1,inEnd);
        root->left=solve(inorder,postorder,size,postIndex,inStart,position-1);
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size=inorder.size();
        int postIndex=postorder.size()-1;
        int inStart=0;
        int inEnd=inorder.size()-1;
        return solve(inorder,postorder,size,postIndex,inStart,inEnd);
        
    }
};