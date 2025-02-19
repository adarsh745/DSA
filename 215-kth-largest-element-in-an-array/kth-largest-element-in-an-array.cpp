class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int i=1;
        while(i!=k)
        {
            q.pop();
            i++;
        }
        int ans=q.top();
        return ans;
    }
};