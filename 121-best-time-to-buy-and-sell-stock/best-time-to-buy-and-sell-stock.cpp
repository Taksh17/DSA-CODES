class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins=prices[0];
        int profit=0;
        int cost=0;
        for(int i=1;i<prices.size();i++){
            cost=prices[i]-mins;
            profit=max(cost,profit);
            mins=min(mins,prices[i]);
        }
        return profit;

        
    }
};