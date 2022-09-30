class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     int profit=INT_MIN;
       int minprice=INT_MAX;
        for(int i=0;i<n;i++)
        {

        minprice=min(minprice,prices[i]);
            profit=max(profit,prices[i]-minprice);
            }
       return profit;
    }
};