// LeetCode
// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy=INT_MAX, sell=INT_MIN;
        int profit = 0;
        for(int i=0; i<n; i++){
            if(prices[i]<buy){
                buy = prices[i];
                sell = prices[i];
            }
            if(prices[i]>sell){
                sell = prices[i];
                profit = max(profit, sell-buy);
            }
        }
        return profit;
    }
};
