class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i= 0;
        int j = 0;
        while(j < s.length()){
        while(j < s.length() && s[j] == ' ') j++;
        i = j;
        while(j < s.length() && s[j] != ' ') j++;
        reverse(s.begin() + i, s.begin() + j);
        }
        int l = 0;
        int m = 0;
    while(m < s.length()){
        while(m < s.length() && s[m] == ' ') m++;

        while(m < s.length() && s[m] != ' ') s[l++] = s[m++];

        int j = m;
        while(j < s.length() && s[j] == ' ') j++;
        if(j < s.length()) s[l++] = ' ';
    
    }
    s.resize(l); //resize the string to the i i.e. remove the empty places after this point

    return s;
    
    }

};