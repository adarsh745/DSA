class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int l=0 , r=n-1;
        int ans =0;

       

        while(l<=r)
        {
            int mid=l+ (r-l)/2;
            if(nums[mid]==target)
            {
                return mid;
                break;
            }

            if(nums[mid]<target)
            {
                l=mid+1;
            }
            if(nums[mid]>target)
            {
                r=mid-1;
            }

        }
 

         return -1;
        
    }
};