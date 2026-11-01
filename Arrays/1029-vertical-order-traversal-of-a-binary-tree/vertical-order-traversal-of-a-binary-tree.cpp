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
void dfs(TreeNode* root,int row,int col,map<int,vector<pair<int,int>>> &buckets){
    if(root){
         buckets[col].push_back({row, root->val});

    dfs(root -> left, row+1, col -1, buckets);
        dfs(root -> right, row+1, col +1, buckets);

    }
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root) return {};
        int col, row;
        col = 0;
        row =0;
        map<int, vector<pair<int,int>>> buckets;
        dfs(root, row, col, buckets);
        vector<vector<int>> res;
    for(auto& p : buckets){
        auto& nodes = p.second;
        sort(nodes.begin(), nodes.end());
        vector<int> colVal;
        for(auto& values: nodes){
            colVal.push_back(values.second);
        }
    res.push_back(colVal);

    }
        return res;
    }
};