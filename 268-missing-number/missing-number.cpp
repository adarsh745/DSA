class Solution {
public:
    int missingNumber(vector<int>& nums) {

        vector<int>v;

        int n =nums.size();
        int sum=0;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            

        }

        int total= (n*(n+1)) / 2;

        int ans =total - sum ;
        return ans;
        
    }
};