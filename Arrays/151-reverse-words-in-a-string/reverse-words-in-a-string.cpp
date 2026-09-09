class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
    int left, right;
    left = 0;
    right = 0;
   while(right < s.length()){
       while(right < s.length() && s[right] == ' ') right++;

left = right;
while(right < s.length() && s[right] != ' ') right++;
reverse(s.begin() + left, s.begin() + right);

    }
    int j, i;
    j = 0; 
    i= 0;

while(j < s.length()){
    while(j < s.length() && s[j] == ' ') j++;
    while(j < s.length() && s[j] != ' ') 
    s[i++] = s[j++];

 int k = j;
 while(k < s.length() && s[k] == ' ') k++;
 if(k < s.length()) {
 s[i++] = ' ';
}
   

}
    
s.resize(i);
return s;
    }

};