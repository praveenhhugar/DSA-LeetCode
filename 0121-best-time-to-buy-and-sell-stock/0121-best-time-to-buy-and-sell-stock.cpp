class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int low=prices[0];
        int profit=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<low)
            {
                low=prices[i];
            }
            if(prices[i]-low>profit)
            {
                profit=prices[i]-low;
            }
        }
        return profit;
    }
};