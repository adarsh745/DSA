class Solution {
public:
long long findcost(vector<int>& nums, vector<int>& cost,int target)
{
    long long res=0;
    for(int i=0;i<nums.size();i++)
    {
        res+=(long long)abs(target-nums[i])*cost[i];
    }
    return res;
}
    long long minCost(vector<int>& nums, vector<int>& cost) 
    {
        long long ans=INT_MAX;
        int left=*min_element(nums.begin(),nums.end());
        int right=*max_element(nums.begin(),nums.end());
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            long long cost1=findcost(nums,cost,mid);
            long long cost2=findcost(nums,cost,mid+1);
           if(cost2>cost1)
           {
            right=mid-1;
           }
           else
           {
            left=mid+1;
           }
           ans=min(cost1,cost2);

        }
        if(ans==INT_MAX) return 0;
        return ans;
        
    }
};