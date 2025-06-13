/*
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
*/

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    int i = 0;
    int j = 0;
    while(j < nums.size()) {
        i = j;
        while(j + 1 < nums.size() && nums[j+1] == nums[j] + 1) {
            j++;
        }
        if(i == j) {
            result.push_back(to_string(nums[i]));
        } else {
            result.push_back(to_string(nums[i])
                                + "->"
                                + to_string(nums[j]));
        }
        j++;
    }
    return result;
}