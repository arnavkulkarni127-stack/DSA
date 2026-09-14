class Solution {
public:
    int romanToInt(string s) {
        unordered_map<int, int> charmap;
        charmap[(int)'I'] = 1;
        charmap[(int)'V'] = 5;
        charmap[(int)'X'] = 10;
        charmap[(int)'L'] = 50;
        charmap[(int)'C'] = 100; 
        charmap[(int)'D'] = 500;
        charmap[(int)'M'] = 1000;
        int total =0;
    for(int i = 0; i < s.length(); i++){
        int v1 = (int)s[i];
        int v2 = (int)s[i + 1];
        if(i + 1 < s.length() && charmap[v1] < charmap[v2]){
            total -= charmap[v1];
        }
        else {
            total +=  charmap[v1];
        }
    }
    return total;

    }
};