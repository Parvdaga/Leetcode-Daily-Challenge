class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        
        // vector<int> dp(n+1, -1);
        // dp[0] = 0;
        // dp[1] = 1;
        int p2=0, p1=1;
        for(int i = 2; i <= n; i++) {
            // dp[i] = dp[i-1] + dp[i-2];
            int cur = p1+p2;
            p2=p1;
            p1=cur;
        }
        
        return p1;
    }
};