class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int up = 0;
        int down = 0;
        int n = arr.size() - 1;
        int i = 0;
        while(i < n && arr[i] < arr[i+1]){
            up += 1;
            i++;
        }
        while(i < n && arr[i] > arr[i+1]){
            down += 1;
            i++;
        }
        if(up == n || down == n){
            return false;
        }
        else if(down + up == n){
            return true;
        }
        return false;
        
    }
};