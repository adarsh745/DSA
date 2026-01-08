class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        // Combine vectors
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Sort
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();

        // If odd
        if (n % 2 == 1) {
            return nums1[n / 2];
        }
        // If even
        else {
            return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
        }
    }
};
