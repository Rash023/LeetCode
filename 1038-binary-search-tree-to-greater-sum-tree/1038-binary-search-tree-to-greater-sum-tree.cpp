class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        // Initialize a local variable nodeSum.
        int nodeSum = 0;
        bstToGstHelper(root, nodeSum);
        return root;
    }

private:
    void bstToGstHelper(TreeNode* root, int& nodeSum) {
        // If root is null, make no changes.
        if (!root) {
            return;
        }

        bstToGstHelper(root->right, nodeSum);
        nodeSum += root->val;
        // Update the value of root.
        root->val = nodeSum;
        bstToGstHelper(root->left, nodeSum);
    }
};