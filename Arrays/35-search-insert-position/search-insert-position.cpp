class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;

        int min = 0;
        while (target != nums[i]) {
            if (nums[i] < target) {
                min = i + 1;
            }
            i++;
            if (i == nums.size())
                break;
        }
        return min;
    }
};