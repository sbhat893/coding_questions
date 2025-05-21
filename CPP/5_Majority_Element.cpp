/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;
    for(int ele:nums){
        if(count == 0){
            candidate = ele;
            count = 1;
        } else if (ele == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}