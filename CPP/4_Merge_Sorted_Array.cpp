/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int last = m + n - 1;
    m = m - 1;
    n = n - 1;
    while(n >= 0 && m >= 0){
        if(nums2[n] > nums1[m]){
            nums1[last] = nums2[n];
            n--;
        } else {
            nums1[last] = nums1[m];
            m--;
        }
        last--;
    }
    while (n >= 0) {
        nums1[last] = nums2[n];
        n--;
        last--;
    }
}