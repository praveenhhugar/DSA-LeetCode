int maxProfit(int* prices, int pricesSize) {
    int i;
    int low=prices[0];
    int profit=0;
    for(i=0;i<pricesSize;i++)
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