// Leetcode
// 1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for(auto acct: accounts){
            int sum=0;
            for(auto money: acct){
                sum += money;
            }
            max_wealth = max(max_wealth, sum);
        }
        return max_wealth;
    }
};

