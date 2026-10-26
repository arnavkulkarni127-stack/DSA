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
int helper(TreeNode* root,int &maximum){
    if(!root) return 0;
    int rootVal = root->val;
        int left = max(0, helper(root->left, maximum));
        int right = max(0, helper(root->right, maximum));
    maximum = max(maximum, rootVal+left+right);
  return rootVal+max(left,right);
    
}
    int maxPathSum(TreeNode* root) {
        int maximum = INT_MIN;
        helper(root, maximum);
        return maximum;
        
    }
};