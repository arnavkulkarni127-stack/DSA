class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary, sec,i,n;
        n = mat.size();
        primary = 0;
        sec = 0;
        for(i = 0; i < n; i++ )
        {
            int j = n-1-i;
            primary += mat[i][i];
            if(i == j) continue;
            sec += mat[i][j];

        }
        return primary+sec;
    }
};