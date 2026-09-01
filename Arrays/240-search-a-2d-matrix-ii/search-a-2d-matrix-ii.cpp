    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {

            int m = matrix.size();
            int  n = matrix[0].size();
           
           // if(m == 0) return false;
           
           // if(n == 0) return false;
            int i = 0;
            
           int j = n - 1;
           // if (j < 0) return false;
            while (i<m && j>=0) {
               
               if(matrix[i][j] < target) i++;
               else if(matrix[i][j] > target) j--;
               else return true;
            }
            return false;
        }
    };