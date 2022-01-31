class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> unique; 
        for(int i = 0; i < nums.size(); i++){
            if(unique.find(nums[i]) != unique.end())
                unique.erase(nums[i]);
            else
                unique.insert(nums[i]);
        }
        return *unique.begin();
    }
};