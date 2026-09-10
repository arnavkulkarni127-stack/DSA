class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string reult = "";
        for (char c : s) {
            if (c == '(') {
                if (count > 0)
                    reult += c;
                count++;
            }
            else{
                 count--;
                if (count > 0)
                    reult += c;
               
            }
        }
        return reult;
    }
};