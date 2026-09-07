class Solution {
public:
    bool rotateString(string s, string goal) {
     string doubled = s + s;

    if(s.length() != goal.length() || doubled.find(goal) == string::npos) return false;

 
    return true;

    }
};