class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int buy=0,sell=1;
        while(sell<prices.size()){
            if(prices[buy]<prices[sell]){
                maxProfit=max(prices[sell]-prices[buy],maxProfit);
            }
            else{
                buy=sell;
            }
            sell++;
        }
        return maxProfit;
    }
};