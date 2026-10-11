class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_p=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            max_p=max(max_p,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return max_p;
    }
};
