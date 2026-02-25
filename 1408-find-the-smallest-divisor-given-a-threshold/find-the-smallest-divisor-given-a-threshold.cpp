class Solution {
public:

//    int findsum(int mid , vector<int>& ans , int t)
//    {

//     int maxi=0;
//     int sum=0;
//     int ans =0;
//       for(int i=0;i<nums.size();i++)
//       {
//         int d=nums[i]/mid;
//         sum+=d;
        
//       }

//       if(sum>t)
//       {
//         l=mid+1;
//       }
//       else{
//         h=mid-1;

//       }

//       if(min<sum)
//       {
//         ans =mid

//       }

//    }
    

    int smallestDivisor(vector<int>& nums, int t) {
        
        int l=1;
        int max=*max_element(nums.begin(),nums.end());

        cout<<"max is : "<<max<<endl;

        int h=max;

        int lastSum=INT_MIN;
        int ans =0;

        while(l<=h){

            int mid=l+(h-l)/2;
            int sum=0;

            for(int i=0;i<nums.size();i++)
            {
                sum += (nums[i] + mid - 1) / mid;  // ceiling division

            }

            // if(sum>t)
            // {
            //     l=mid+1;
            // }
            // else if(sum<t)
            // {
            //     h=mid-1;
            // }
            
            if(sum<=t)
            {
                // lastSum=sum;
                ans = mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            // int div=findsum(mid , nums,t , l ,h);
            
        }

        return ans;
        
    }
};