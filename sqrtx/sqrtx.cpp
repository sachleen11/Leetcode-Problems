class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        if(x == 1 || x == 2)
            return 1;
        long i;
        for( i = 1; i*i <= x; i++);
        return i-1;
    }
};