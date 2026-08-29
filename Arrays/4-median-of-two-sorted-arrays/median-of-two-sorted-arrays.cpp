class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i, j, target, count, current, prev;
        i = 0;
        j = 0;
    int total = m+n;
    target = total/2;
    count = 0;
    prev = 0;
    current = 0;
    while(count <= target){
        prev = current;
        if(i < m && (j >= n || nums1[i]<nums2[j])){
            current = nums1[i];
            i++;
        }
        else{
            current = nums2[j];
    j++;
        }
        count++;
    }
    if(current ==  0) return 0.00;

    if(total % 2== 1){
        return current;
    }
    else{
        return (current + prev)/2.00;
    }
    }
};