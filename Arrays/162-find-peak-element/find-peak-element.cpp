class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low, high, mid;
        low  = 0;
        high = nums.size() - 1;
        if(nums.size() == 1) return low;
        if(nums[low] > nums[low+1] && nums.size() > 1){
            return low;
        }
        if(nums[high] > nums[high - 1] && nums.size() > 1){
            return high;
        }

        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] > nums[mid - 1] && nums[mid+1] < nums[mid]){
                return mid;
            }
            else if(nums[mid + 1] > nums[mid]){
                low = mid;
            }
            else{
                high  = mid; 
            }
        }
        return mid;

    }
};