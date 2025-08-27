class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minId =0, maxId=0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[minId]) minId=i;
            if(nums[i]>nums[maxId]) maxId=i;
        }

        //forward
        int forward= max(minId,maxId)+1;
        //backward
        int back = n-min(minId,maxId);
        //mixed
        int optimalmin = min(minId+1,n-minId);
        int optimalmax = min(maxId+1,n-maxId);
        int mixed = optimalmin+ optimalmax;
        return min({forward,back,mixed});
    }
};