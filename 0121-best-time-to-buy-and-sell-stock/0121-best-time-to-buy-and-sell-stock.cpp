class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            maxProfit=max(maxProfit,prices[i]-buy);
        }
        return maxProfit;
    }
};