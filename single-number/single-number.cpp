class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set <int> checkTwice; 
        for(int i = 0;i < nums.size(); i++){
            if(checkTwice.find(nums[i]) != checkTwice.end()){
                checkTwice.erase(checkTwice.find(nums[i]));
            }
            else{
                checkTwice.insert(nums[i]);
            }
        }
        return *(checkTwice.begin());
    }
};