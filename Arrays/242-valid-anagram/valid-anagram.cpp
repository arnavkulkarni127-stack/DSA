class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        unordered_map<int, int> freq(256);
        for (char c : s) {

            freq[c]++;
        }
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0)
                return false;
        }
        for (auto& pair : freq) {
            if (pair.second != 0)
                return false;
        }
        return true;
    }
};