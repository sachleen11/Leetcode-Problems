class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> unique; 
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(unique.find(nums[i]) != unique.end())
                unique.erase(nums[i]);
            else
                unique.insert(nums[i]);
        }
        return *unique.begin();
    }
};