class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mpp;
        int maxFreq=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            maxFreq=max(maxFreq,it.second);
        }
        int count=0;
        for(auto it:mpp){
            if(maxFreq== it.second) count=count+ maxFreq;
        }
        return count;
    }
};