class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int buy = 0, sell = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[buy] > prices[i]){
                buy = i;
                sell = i;
            }
            else if(prices[sell] < prices[i]){
                sell = i;
                if(prices[sell] - prices[buy] > maxP)
                    maxP = prices[sell] - prices[buy];
            }
        }
        return maxP;
    }
};