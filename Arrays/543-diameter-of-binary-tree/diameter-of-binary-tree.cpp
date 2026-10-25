/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
int maximum = INT_MIN;
    int height(TreeNode* root) {
        if (!root) return 0;
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            int current = leftHeight + rightHeight;
            maximum = max(maximum, current);
            return max(leftHeight, rightHeight) + 1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
         height(root);
         return maximum;
    }
};