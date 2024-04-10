class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {

        int buy = -prices[0]-fee , sell = 0 ; 

        for (int i = 1 ; i < prices.size() ; i++ ) 
        {
            int buy1 , sell1 ; 
            sell1 = max ( sell , prices[i] + buy) ; 
            buy1 = max(buy , -prices[i] + sell-fee) ; 
            buy = buy1 ; 
            sell = sell1 ; 
        }
        return sell ; 
        
    }
};