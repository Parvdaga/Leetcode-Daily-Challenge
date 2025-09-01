class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.empty()) return 1;
        
        int n = nums.size();
        unordered_set<int> numSet;
        
        for (int num : nums) {
            if (num > 0) {
                numSet.insert(num);
            }
        }

        for (int i = 1; i <= n + 1; i++) {
            if (numSet.find(i) == numSet.end()) {
                return i;
            }
        }
        
        return 1;
    }
};