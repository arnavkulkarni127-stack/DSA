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
    int height(TreeNode* root, int& maximum) {
        if (!root)
            return 0;
        int leftHeight = height(root->left,maximum);
        int rightHeight = height(root->right, maximum);
        maximum = max(maximum, leftHeight + rightHeight);
        return max(leftHeight, rightHeight) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maximum = INT_MIN;
        height(root, maximum);
        return maximum;
    }
};