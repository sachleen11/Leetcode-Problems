class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        while(left <= right){
            long mid = (left + right)/2;
            long prod = mid*mid;
            if(prod == x)
                return mid;
            if(prod < x){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        return right;
    }
};