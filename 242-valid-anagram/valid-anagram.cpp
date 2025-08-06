class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        unordered_map<char,int> mp2;
        for(char c:t){
            mp2[c]++;
        }
        if(mp==mp2) return true;
        return false;
    }
};