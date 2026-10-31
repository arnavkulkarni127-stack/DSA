class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> seen;
    for(int i =0; i < nums.size(); i++){
        int x = nums[i];
        int y = target - x;
        if(seen.count(y))
        return {seen[y], i};
        seen[x] = i;
    }
    return {};
    }
};