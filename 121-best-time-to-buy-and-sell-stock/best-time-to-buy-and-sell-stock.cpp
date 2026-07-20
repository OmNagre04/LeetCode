class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int MaxProfit = 0;
        int BuyP = arr[0];
        for(int i = 1; i < n; i++){
            if(BuyP < arr[i]){
                int profit = arr[i] - BuyP;
                MaxProfit = max(MaxProfit, profit);
            } else {
                BuyP = arr[i];
            }
        }
        return MaxProfit;
    }
};