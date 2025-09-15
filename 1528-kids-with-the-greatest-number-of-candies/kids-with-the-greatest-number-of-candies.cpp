class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int m = INT_MIN;
        for(int i: candies){
            m=max(m,i);
        }
        for(int i:candies){
            if(i+extraCandies >= m) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};