class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int profit1=0;
        int neww=prices[0];
        int max=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<neww){
                neww=prices[i];
                max=0;
            }
            if(prices[i]>max){
                max=prices[i];
            }
            profit1= max - neww;
            if(profit1>profit){
            profit = profit1;
            }
        }
        return profit;
    }
};