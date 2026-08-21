class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low, high, mid;
        low = *max_element(weights.begin(), weights.end());
        high = accumulate(weights.begin(), weights.end(), 0);
        while (low < high){
                mid = low + (high - low) / 2;
                if (enoughWeight(weights, days, mid)) {
                    high = mid;
                } else {
                    low = mid+1;
                }
            }
        return low;
    }
    bool enoughWeight(vector<int>& weights, int days, int mid) {
        int sum = 0;
        int count = 1;
        for (int weight:weights) {
            if (sum + weight <= mid) {
                sum += weight;
            } else {
                count++;
                sum = weight;
            }
        
        }
          return count <= days ? true : false;
    }

};