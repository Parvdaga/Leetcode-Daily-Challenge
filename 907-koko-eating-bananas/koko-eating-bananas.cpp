class Solution {
public:
    bool check(int mid, int h,vector<int> &piles){
        long long total=0;
        for(int pile:piles){
            total += (pile + mid - 1)/mid;
            if(total>h) return false;
        }
        return total <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right= *max_element(piles.begin(), piles.end());
        int res = right;
        while(left<=right){
            int mid= left + (right - left)/2;
            if(check(mid,h,piles)){
                res = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return res;
    }
};