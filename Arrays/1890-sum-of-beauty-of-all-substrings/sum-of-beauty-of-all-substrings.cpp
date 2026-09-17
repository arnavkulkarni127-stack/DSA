class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        for (int i = 0; i < s.length(); i++) {
            vector<int> freq(26, 0);
         for(int j = i; j < s.length(); j++) {
                freq[s[j] - 'a']++;
             
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