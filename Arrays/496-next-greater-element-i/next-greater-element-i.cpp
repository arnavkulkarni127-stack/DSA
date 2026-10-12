class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n2;
         vector<int> res(nums1.size(), -1);
         for(int i : nums2){
            n2.push_back(i);
         }
         for(int i = 0; i < (int)nums1.size(); i++){
            auto it = find(n2.begin(), n2.end(), nums1[i]);
            if((it) == n2.end()){
                continue;
            }
            int index =(int)distance(n2.begin(), it)+1;    
            for(int j =index; j<(int)nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    res[i] = nums2[j];
                    break;
                }
            }

         }
         return res;

    }
};