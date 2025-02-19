class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int n = p.size();
        if(n==1)
            return 0;
        int ans =0 ;
        int maxi = p[n-1];

        for(int i=n-2;i>=0;i--)
        {
            if(p[i]>maxi)
            {
                maxi = p[i];
            }
            else
            {
                ans = max(ans,maxi-p[i]);
            }
        }

        return ans;
        
    }
};