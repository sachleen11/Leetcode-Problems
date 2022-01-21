class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int remove = nums.size() - 1;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};