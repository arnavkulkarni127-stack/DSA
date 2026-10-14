class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size(); 
        vector<int> res(n,-1);
        int count = 0;
        unordered_map<int, int> m;
      for(int i = 0; i < 2*n; i++){
        int x = nums[i%n];
        while(!s.empty() && x > nums[s.top()]){
            res[s.top()] = x;
            s.pop();
        }
        if(i < n) s.push(i);
      }
        return res;
    }
};