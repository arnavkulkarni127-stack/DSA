class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rowCount(mat.size(), 0), colCount(mat[0].size(), 0);
        int count = 0;     
         for(int i =0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    rowCount[i]++;
                    colCount[j]++;
                }

            }
        }
        

           for(int i =0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                 if(mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1)
                 {
                    count++;
                 }
            }
        }
        return count;
    }
};