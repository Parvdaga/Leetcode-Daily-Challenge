class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        vector<int> rem1; // To store numbers with remainder 1
        vector<int> rem2; // To store numbers with remainder 2
        
        for(int i : nums){
            sum += i;
            if (i % 3 == 1) rem1.push_back(i);
            else if (i % 3 == 2) rem2.push_back(i);
        }
        
        if(sum % 3 == 0) return sum;
        
        int ans = 0;
        
        if (sum % 3 == 1) {
            if (!rem1.empty()) {
                ans = max(ans, sum - rem1[0]);
            }
            if (rem2.size() >= 2) {
                ans = max(ans, sum - rem2[0] - rem2[1]);
            }
        }
        
        else if (sum % 3 == 2) {
            if (!rem2.empty()) {
                ans = max(ans, sum - rem2[0]);
            }
            if (rem1.size() >= 2) {
                ans = max(ans, sum - rem1[0] - rem1[1]);
            }
        }
        
        return ans;
    }
};