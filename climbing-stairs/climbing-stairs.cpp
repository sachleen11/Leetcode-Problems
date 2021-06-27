class Solution {
public:
    int memo[46] = {0};
    int climbStairs(int n) {
        if(n < 0)
            return 0;
        if(n == 0){
            memo[0] = 1;
            return memo[0];
        }
        if(n == 1){
            memo[1] = 1;
            return memo[1];
        }
        if(memo[n] != 0){
            return memo[n];
        }
        memo[n-2] = climbStairs(n-2);
        memo[n-1] = climbStairs(n-1);
        memo[n] = memo[n-1] + memo[n-2];
        return memo[n];
    }
};