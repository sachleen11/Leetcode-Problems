class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size() - 1;
        int mid;
        if(target < nums[left])
            return 0;
        if(target > nums[right])
            return right + 1;
        while(left <= right){
            mid = (left+right)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target){
                if(mid+1 < nums.size() && nums[mid+1] > target)
                    return mid+1;
                else
                    left = mid + 1;
            }
            else{
                if(mid - 1 > 0 && nums[mid - 1] < target)
                    return mid; 
                else 
                    right = mid - 1;
            }
        }
        return 0;
    }
};