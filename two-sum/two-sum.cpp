class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution; 
        unordered_map<int,int> pairing;
        for(int i = 0; i < nums.size(); i++){
            pairing[target - nums[i]] = i;
        }
        //unordered_map<int,int>::iterator it;
        for(int i = 0; i < nums.size(); i++){
            if(pairing.find(nums[i]) != pairing.end() && pairing[nums[i]] != i){
                solution.push_back(i);
                solution.push_back(pairing[nums[i]]);
                break;
            }
        }
        return solution;
    }
};