class Solution {
public:
    int beautySum(string s) {
        int i, j;
    int n = s.length();;
        int beauty = 0;
        for (i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            j = i;
            while (j < n) {
                freq[s[j] - 'a']++;
                j++;
                int minf = INT_MAX;
                int maxf = 0;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxf = max(freq[k], maxf);
                        minf = min(freq[k], minf);
                    }
                    
                }
      beauty += maxf - minf;
            }
          
        }
        return beauty;
    }
};