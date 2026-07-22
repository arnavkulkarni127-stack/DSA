class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n, i, j;
        n = nums.size();
        vector<int> result;
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
            if (count[num] >   n / 3){
            bool alreadyExist = false;
            for(int x : result){
                if(x == num) alreadyExist = true;
            }
            if(!alreadyExist) result.push_back(num);
            }
        }

        return result;
    }
};