class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit = prices[0];
       int profit = 0;
        for(int i=0; i<prices.size(); i++){
            int miniDifference = prices[i] - minProfit;
            profit = max(profit, miniDifference );
            minProfit = min(minProfit , prices[i]);
        }
        return profit;
    }
};