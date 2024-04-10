class Solution {
public:
    int t[5001][2];
    int solve(vector<int>& prices,int day,int n,bool buy){
        if(t[day][buy]!=-1) return t[day][buy];
        
        if(day>=n) return 0;
        int profit=0;
        
        if(buy){
            int buy=solve(prices,day+1,n,false)-prices[day];
            int not_buy=solve(prices,day+1,n,true);
            profit=max(buy,not_buy);
            
        }
        else{
            int sell=prices[day]+solve(prices,day+2,n,true);
            int not_sell=solve(prices,day+1,n,false);
            profit=max(sell,not_sell);
        }
        
        return t[day][buy]=profit;
        
    }
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         memset(t, -1, sizeof(t));
        return solve(prices,0,n,true);
        
    }
};