class Solution {
public:
    int beautySum(string s) {
        int i, j;
    
        int beauty = 0;
        for (i = 0; i < s.length(); i++) {
            vector<int> freq(26, 0);
            j = i;
            while (j < s.length()) {
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