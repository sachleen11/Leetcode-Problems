class Solution {
public:
    int climbStairs(int n) {
        int stairs[50];
        for(int i = 0; i < 50; i++){
            stairs[i] = -1;
        }
        return climbing( n, stairs);
        
    }
    int climbing(int n, int stairs[]){
        if(stairs[n] != -1)
            return stairs[n];
        if(n == 1 || n == 2 || n == 3){
            stairs[n] = n; 
            return stairs[n];
        }
        if(stairs[n-1] != - 1 && stairs[n-2] != -1){
            stairs[n] = stairs[n - 1] + stairs[n - 2];
            return stairs[n];
        }
        stairs[n] = climbing(n - 1, stairs) + climbing(n - 2, stairs);
        return stairs[n];
    }
};