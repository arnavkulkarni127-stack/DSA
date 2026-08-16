class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low, high, mid, p, q;
        int n = nums.size() - 1;
        low = 0;
        high = n;
        if (n == 0)
            return nums[0];
        if (n < 0)
            return 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == nums[mid - 1])
                p = mid - 2;
            else
                p = mid - 1;
            if (nums[mid] == nums[mid + 1])
                q = mid + 2;
            else
                q = mid + 1;

     if (q % 2 == 1 && p%2 ==1) {
                    return nums[mid];
                }
            if (p % 2 == 0) {
                high = p;
                if(high == low)
                return nums[high];
               

            } else {
                low = q;
                if(low == high) return nums[low];
            }
        }
        return nums[mid];
    }
};