class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low, high;
        low = *max_element(nums.begin(), nums.end());
        high = accumulate(nums.begin(), nums.end(), 0);

        while(low < high){
            int mid = low + (high - low)/2;
            if(canSplit(nums, k, mid)){
                high = mid;
            }
            else{
                low = mid +1;

            }
        }
        return low;
    }

    bool canSplit(vector<int>& nums, int k, int maxSum){
        int subArray = 1;
        int currentSum = 0;
        for(int num:nums){
            currentSum += num;
            if(currentSum > maxSum){
                subArray++;
                currentSum  = num;
            }
            if(subArray > k) return false;
        }
        return true;
    }
};