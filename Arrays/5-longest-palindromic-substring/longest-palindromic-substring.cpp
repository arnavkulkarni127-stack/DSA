class Solution {
public:
    string longestPalindrome(string s) {
        int i, left,right;
    int n = s.length() -1;
int start = 0;
int maxlen = 1;
    for(i = 0;i < n; i++){

        left = i;
        right = i;
        while(left >= 0 && right <= n && s[left] == s[right]){
            if(right - left + 1 > maxlen){
                maxlen = right-left +1;
                start = left;
            }
            right++;
            left--;
        }

        left = i;
        right = i + 1;
         while(left >= 0 && right <= n && s[left] == s[right]){
            if(right - left + 1 > maxlen){
                maxlen = right-left +1;
                start = left;
            }
            right++;
            left--;
        }
    }
    return s.substr(start, maxlen);
    }
};