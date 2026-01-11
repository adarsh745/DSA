class Solution {
public:
    int maxProfit(vector<int>& a) {

        int profit=0;
        int mini=a[0];
        int maxi=0;

        for(int i=1;i<a.size();i++)
        {

            profit=a[i]-mini;

             maxi=max(maxi,profit);

            mini=min(mini,a[i]);

        

        }

        return maxi;
    }
};