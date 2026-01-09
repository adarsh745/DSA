class Solution {
public:
    string largestNumber(vector<int>& nums) {

        string ans="";
        int n =nums.size();

        vector<string>v;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                string s1= to_string(nums[j]) + to_string(nums[i]);

                string s2= to_string(nums[i]) + to_string(nums[j]);

                if(s1>s2)
                {
                    swap(nums[i],nums[j]);
                }

            }
            
            ans= ans+ to_string(nums[i]);
        }
                if(ans[0]=='0') return "0";


        return ans ;

    }
};