class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = searchFirst(nums, target);
        int last = searchLast(nums, target);
        return {first, last};

    }
        int searchFirst(vector<int> & nums, int target) {
            int low = 0;
            int high = nums.size() - 1;
            int result = -1;
            while (low <= high) {
                int middle = low + (high - low) / 2;

                if (target == nums[middle]) {
                    result = middle;
                    high = middle - 1;

                } else if (target < nums[middle])
                    high = middle - 1;
                else {
                    low = middle + 1;
                }
            }
            return result;
        }
      int searchLast(vector<int> & nums, int target) {
            int low = 0;
            int high = nums.size() - 1;
            int result = -1;
            while (low <= high) {
                int middle = low + (high - low) / 2;

                if (target == nums[middle]) {
                    result = middle;
                    low = middle + 1;

                } else if (target < nums[middle])
                    high = middle - 1;
                else {
                    low = middle + 1;
                }
            }
            return result;
        }
};