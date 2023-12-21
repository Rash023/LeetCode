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
    //function to get the index of the target element in inorder array
    int searchInorder(vector<int> &inorder,int &size,int target){
        for(int i=0;i<size;i++){
            if(inorder[i]==target){
                return i;
            }
        }
        
        return -1;
    }
    
    
    
    
    TreeNode *solve(vector<int> &preorder,vector<int> &inorder,int size,int &preIndex,int inorderStart,int inorderEnd){
        if(preIndex>=size || inorderStart>inorderEnd) return NULL;
        int element=preorder[preIndex];
        preIndex++;
        TreeNode *root=new TreeNode(element);
        
        int position=searchInorder(inorder,size,element);
        
        
        root->left=solve(preorder,inorder,size,preIndex,inorderStart,position-1);
        root->right=solve(preorder,inorder,size,preIndex,position+1,inorderEnd);
        return root;
        
    }
    
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size=preorder.size();
        int preIndex=0;
        int inorderStart=0;
        int inorderEnd=inorder.size()-1;
        
        return solve(preorder,inorder,size,preIndex,inorderStart,inorderEnd);
        
    }
};