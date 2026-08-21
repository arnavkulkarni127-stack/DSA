class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        while(l < r){
            int mid = l + (r - l)/2;
            int curr_load = 0, d = 1;
            for(auto w : weights){
                if(curr_load + w <= mid){
                    curr_load += w;
                }else{
                    curr_load = w;
                    d++;
                }
            }
            if(d <= days){
                r = mid;
            }else{
                l = mid + 1;
            }
        }

        return l;
    }
};