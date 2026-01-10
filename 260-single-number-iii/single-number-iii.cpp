class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int ,int>mp;

        int n =nums.size();

        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        vector<int>v;

        for(auto it:mp)
        {
            if(it.second==1)
            {
                v.push_back(it.first);
            }
        }

        return v;
        
    }
};