class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
       int m = 0;
        for(int x : s){
            if(s.count(x-1)) continue;
        int y = x;
        while(s.count(y)) y++;
        m = max(m, y-x);
        
        }
        return m;
    }
};