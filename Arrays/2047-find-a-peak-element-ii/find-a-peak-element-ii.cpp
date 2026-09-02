class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int high, low;
        int m = mat.size();
        int n = mat[0].size();
        int mid;
        int maxCol;
        low = 0;
        high = m - 1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            maxCol = 0;
            for (int j = 0; j < n; j++) {
                if (mat[mid][j] > mat[mid][maxCol]) {
                    maxCol = j;
                }
            }
            int above = mid == 0 ? -1 : mat[mid - 1][maxCol];
            int below = mid == m - 1 ? -1 : mat[mid + 1][maxCol];
            if (mat[mid][maxCol] > above && mat[mid][maxCol] > below) {
                return {mid, maxCol};
            } else if (above > mat[mid][maxCol]) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return {mid, maxCol};
    }
};