class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long d =(long long) m*k;
        if( d > bloomDay.size()) return -1;
        int low = 0;
        int ans;
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        while(low <= right){
            long  mid = low+ (right - low)/2;
            if(bloomNumber(bloomDay, k, mid) >= m){
                right = mid - 1;
            }
            else{
                low = mid+1;
            }
            ans = low;
        }
        return ans;
    }
    int bloomNumber(vector<int>& bloomDay, int k, int mid) {
        int pairCount = 0;
        int adjFlwr = 0;
        int i = 0;
      
            while (i <= bloomDay.size() - 1) {
                
                if ( mid >= bloomDay[i]) {
                    adjFlwr++;
                    
                }
                else{
                    adjFlwr = 0;
                }
                
                if(adjFlwr >= k) {pairCount++;
                adjFlwr = 0;
                }
                i++;
            }
            
            return pairCount;

        
    }
};