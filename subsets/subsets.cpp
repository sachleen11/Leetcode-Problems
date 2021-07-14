class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> subsets;
        subsetRec( nums,  0, temp, subsets);
        sort(subsets.begin(), subsets.end());
        int i = 1;
        while(i < subsets.size()){
            if(subsets[i] == subsets[i-1])
                subsets.erase(subsets.begin() + i);
            else
                i++;
        }
        return subsets;
    }
    
    void subsetRec(vector<int> nums, int i, vector<int> cur_sub, vector<vector<int>> &subsets){
        if(i > nums.size() - 1)
            return;
        subsets.push_back(cur_sub);
        subsetRec(nums,i + 1, cur_sub, subsets);
        cur_sub.push_back(nums[i]);
        subsetRec(nums, i+1, cur_sub, subsets);
        subsets.push_back(cur_sub);
    }
};