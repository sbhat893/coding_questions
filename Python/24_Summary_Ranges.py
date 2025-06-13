'''
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
'''

def summaryRanges(nums: List[int]) -> List[str]:
    result = []
    i = 0
    j = 0
    while j < len(nums):
        i = j
        while j + 1 < len(nums) and nums[j+1] == nums[j] + 1:
            j+=1
        if i == j:
            result.append(str(nums[i]))
        else:
            result.append(str(nums[i]) + "->" + str(nums[j]))
        j+=1
    return result