class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;
        vector<int>v; 

        for (int i=0;i<nums.size();i++)
        {
           if(mpp.find(k-nums[i])!=mpp.end())
           {

            cout<<k-nums[i];
              int indx=mpp[k-nums[i]];

              cout<<"this is ind "<<indx<<i<<endl;
              v.push_back(indx);
              v.push_back(i);
              break;
           }

           mpp.insert({nums[i],i});


        }

        return v;
        
    }
};