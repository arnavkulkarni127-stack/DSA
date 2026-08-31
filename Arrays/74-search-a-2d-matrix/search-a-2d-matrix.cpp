class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        if(n == 0) return false;

        int low = 0;
        int high = m * n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / n;
            int col = mid % n;
            int current = matrix[row][col];

            if (current == target)
                return true;
            else if (current > target)
                high = mid - 1;
            else {
                low = mid+ 1;
            }
        }
        return false;
    }
};