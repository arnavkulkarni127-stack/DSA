class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low < high) {
            int mid = low + (high - low) / 2;
            int sum = 0;
            int count = 1;
            for (int weight : weights) {

                if (sum + weight <= mid) {
                    sum += weight;
                } else {
                    count++;
                    sum = weight;
                }
            }
            if (count <= days) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};