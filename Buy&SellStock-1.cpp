class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0,m=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            mp=max(mp,prices[i]-m);
        }
        return mp;
        
    }
};
