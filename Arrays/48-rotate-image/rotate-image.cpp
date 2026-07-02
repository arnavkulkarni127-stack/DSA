class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,m,n;
        m = matrix.size();
        n = matrix[i].size();
        for(i = 0; i < m; i++){
            for(j = i+1; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
          for(i = 0; i < m; i++){
            reverse(matrix[i].begin(), matrix[i].end());
            }
        
    }
};