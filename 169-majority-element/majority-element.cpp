class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans;
        for(int n:nums){
            mp[n]++;
        }
        auto it = max_element(mp.begin(),mp.end(),[](auto const &a, auto const &b){
            return a.second<b.second;
        });
        if(it!=mp.end()){
            ans= it->first;
        }
        return ans;
    }
};