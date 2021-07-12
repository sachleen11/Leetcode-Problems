class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur_min = 0;
        int cur_max = 0;
        int total_profit = 0;
        int i = 0; 
        int n = prices.size();
        while(i < n){ 
            cur_min = prices[i];
            i++;
            while(i < n && prices[i] < cur_min){
                cur_min = prices[i];
                i++;
            }
            if(i < n){
                cur_max = prices[i];
                i++;
                while(i < n && prices[i] > cur_max){
                    cur_max= prices[i];
                    i++;
                }
            }
            else{
                break;
            }
            total_profit += (cur_max - cur_min);
        }
        return total_profit;
    }
};