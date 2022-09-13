class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mv=0;
        int idx=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(prices[i] >= idx) idx = prices[i];
            else{
                mv = max(mv,abs(prices[i]-idx));
            }
        }
        return mv;
        
    }
};