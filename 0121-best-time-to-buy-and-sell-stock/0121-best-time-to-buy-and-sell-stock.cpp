class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
int maxprofit=0;
        for(int price:prices){
            minp = min(minp,price);
            // 1 
            int profit = price-minp;
                 
          maxprofit = max(maxprofit,profit);
        }
return maxprofit;
    }
};