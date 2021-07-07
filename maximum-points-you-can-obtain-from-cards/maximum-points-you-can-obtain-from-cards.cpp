class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {  
        int n = cardPoints.size();
        vector<int> frontSum(n+1);
        frontSum[0] = 0;
        vector<int> backSum(n+1);
        backSum[n] = 0;
        int sumf = 0, sumb = 0;
        
        for(int i = 0; i < n; i++){
            sumf += cardPoints[i];
            frontSum[i+1] = sumf;
        }
        for(int i = n - 1; i >= 0; i--){
            sumb += cardPoints[i];
            backSum[i] = sumb;
        }
        
        int maxSum = INT_MIN;
        for(int i = k; i >= 0; i--){
            maxSum = max(maxSum, frontSum[i] + backSum[n - k + i]);
        }
        return maxSum;
    }
};