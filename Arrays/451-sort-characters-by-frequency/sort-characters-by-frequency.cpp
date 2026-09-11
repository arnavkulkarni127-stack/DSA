class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
    for(char c:s){
        freq[c]++;
    }


    int n = s.length();
    vector<string> bucket(n + 1, "");
    for(auto& pair:freq){
        char c = pair.first;
        int f = pair.second;
        bucket[f].append(f, c);

    }
    string result = "";
    for(int i  = n; i > 0;i--)
{
    if(!bucket[i].empty()){
        result += bucket[i];
    }
}        
return result;
    }
};