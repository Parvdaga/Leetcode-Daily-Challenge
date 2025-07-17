class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        string cur="";
        stack <int> st;
        for(char ch:s){
            cur+=ch;
            if(ch == '(') st.push(ch);
            else st.pop();
            if(st.empty()){
                if(cur.size()>2){
                    ans+= cur.substr(1,cur.size()-2);
                }
                cur="";
            }
        
        }
        return ans;
    }
};