class Solution {
public:
    int maxProfit(vector<int>& p) {

        int minValue=p[0];
        int maxProfit=0;

        for(int i=1 ; i<p.size();i++)
        {
            int diff=p[i]-minValue;
            minValue=min(minValue,p[i]);
            maxProfit=max(maxProfit,diff);
        }

        return maxProfit;
        
    }
};