/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> diff_map;
    for(int i = 0; i < nums.size(); i++) {
        if(diff_map.find(nums[i]) != diff_map.end()) {
            return {i, diff_map[nums[i]]};
        }
        diff_map[target-nums[i]] = i;
    }
    return {};
}