class Solution {
public:
    int findMin(vector<int>& nums) {
        int low, high;
        int mid;
        int n = nums.size();
        low = 0;
        high = n -1;
        while(low < high){
            mid = low+(high-low)/2;
            if(nums[high]<nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];

    }
};