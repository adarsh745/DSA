class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ;

        map<int , int>mpp;

        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        int target = nums.size() / 3;

        cout<<"target"<<target;

        for( auto it : mpp)
        {
            if(it.second>target)
            {
                ans.push_back(it.first);
            }
        }

        return ans;
        
    }
};