class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)
            return n;
        vector<int> lengths(n,1);
        int ans = INT_MIN;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j ++){
                if(nums[i] > nums[j]){
                    lengths[i] = max(lengths[i], lengths[j] + 1);
                }
            }
            ans = max(ans, lengths[i]);
        }
        return ans;
    }
};