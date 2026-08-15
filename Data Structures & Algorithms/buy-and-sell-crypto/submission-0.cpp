class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestprof=0 , buy= prices[0];
        for( int i=1 ; i< prices.size();i++){
            
            bestprof= max( bestprof , prices[i]- buy);
            buy = min( buy , prices[i]);
        }
        return bestprof;
    }
};
