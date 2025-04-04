class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int sum=target-nums[i];
            if(mpp.find(sum)!=mpp.end())
            {
               ans={mpp[sum],i};
               return ans;
            }
           mpp[nums[i]]=i;

        }
        return ans;
        
    }
};