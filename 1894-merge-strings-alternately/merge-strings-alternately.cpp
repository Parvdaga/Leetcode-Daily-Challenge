class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        string st;
        st.reserve(n1 + n2); // avoid repeated reallocations

        int i = 0, j = 0;
        while (i < n1 || j < n2) {
            if (i < n1) st.push_back(word1[i++]);
            if (j < n2) st.push_back(word2[j++]);
        }
        return st;
    }
};
