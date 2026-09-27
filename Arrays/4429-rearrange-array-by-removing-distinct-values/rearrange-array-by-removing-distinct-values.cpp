class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;
        for (int v : nums)
            freq[v]++;
        vector<int> ans;

        while (!freq.empty()) {
            vector<int> keys;
            for (auto& [v, c] : freq)
                keys.push_back(v);
            for (int v : keys) {
                ans.push_back(v);
                freq[v]--;
                if (freq[v] == 0)
                    freq.erase(v);
            }
        }
        return ans;
    }
};