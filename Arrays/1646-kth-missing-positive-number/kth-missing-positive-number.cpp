class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
   int n=arr.size();

        for(int num:arr){
            if(num<=k){
                k++;
            }else{
                break;
            }
        }
        return k; // low is the index at which the missing element should havve been maybe

    }
};