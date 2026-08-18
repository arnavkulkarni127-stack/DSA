class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low, high, mid;
        low = 1;
        high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (canFinish(piles,mid ) <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    long long canFinish(vector<int>& piles,  int k) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k;
            
        }
        return hours;
    }
};