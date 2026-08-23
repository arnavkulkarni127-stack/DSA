class Solution {
public:
    bool isPalindromic(string s) {

        string str = "";
        for(char c:s){
            str += bitset<8>(c).to_string();
        }
            int n = str.length();
        int i =0;
        int j = n-1;
        while(i<j){
            if(str[i] != str[j]){
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
};