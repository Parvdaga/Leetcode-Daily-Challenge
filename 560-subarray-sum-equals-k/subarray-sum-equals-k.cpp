class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int cur=0;
        for (int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                cur+=nums[j];
                if(cur==k){
                    count++;
                }
            }
            cur=0;
        }
         return count;
    }
};