class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s2 = prices.size();
        if (s2 <= 1) return 0;

        int maxProfit = 0;
        int mn = prices[0];   // minimum price seen so far

        for (int i = 1; i < s2; i++) {
            maxProfit = max(maxProfit, prices[i] - mn);
            mn = min(mn, prices[i]);
        }
        return maxProfit;
    }
};