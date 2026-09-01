    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {

            int m, n;
            m = matrix.size();
            if(m == 0) return false;
            n = matrix[0].size();
            if(n == 0) return false;
            int i, j;
            i = 0;
            j = n - 1;
            if (j < 0) return false;
            while (i<m && j>=0) {
                int current = matrix[i][j];
                if (current == target)
                    return true;
                else if (target < current)
                    j--;
                else
                    i++;
            }
            return false;
        }
    };