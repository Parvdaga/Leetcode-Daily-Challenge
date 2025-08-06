class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        while(n>0){
            char c=s[0];
            s.push_back(c);
            s.erase(0, 1);
            if(s== goal) return true;
            n--;
        }
        return false;
    }
};