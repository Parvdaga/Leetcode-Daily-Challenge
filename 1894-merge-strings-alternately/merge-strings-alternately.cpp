class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string st="";
        int count = max(word1.size(),word2.size());
        for(int i=0;i<count;i++){
            if(word1.size()>i) 
            st=st+word1[i];
            if(word2.size()>i)
            st=st+word2[i];
        }
        return st;
    }
};