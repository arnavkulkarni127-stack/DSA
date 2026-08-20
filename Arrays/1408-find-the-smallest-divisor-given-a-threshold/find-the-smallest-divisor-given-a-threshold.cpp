class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low, high, mid;
        low = 1;
        high = *max_element(nums.begin(), nums.end());
        
        while (low < high) {
            mid = low + (high - low) / 2;
            int result = 0;
            for (int num: nums) {

                long long q = (num + mid - 1) / mid;
                result += q;
            }
            if (result <= threshold) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};