class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> checkDup;
        for(int i =0 ;i < nums.size();i++){
            if(checkDup.find(nums[i]) != checkDup.end())
                return true;
            checkDup.insert(nums[i]);
        }
        return false;
    }
};