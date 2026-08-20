class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low, high, mid;
        low = 1;
        high = *max_element(nums.begin(), nums.end());
        while(low < high){
            mid = low + (high - low)/2;
            if(divSum(nums, mid, threshold) <=  threshold){
                high = mid;
            }
            else{
                low = mid +1;
            }

        }
        return low;
    }
    int divSum(vector<int>& nums, int mid, int tres){
        int result = 0;
        for(int i = 0; i<nums.size(); i++){
           long long  q =  (nums[i] + mid - 1)/mid;
             result += q;
             if(result > tres) return result;
        }
        return result;
    }
};