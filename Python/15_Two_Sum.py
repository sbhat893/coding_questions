'''
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
'''

def twoSum(nums, target):
    diff_map = {}
    for i in range(len(nums)):
        if nums[i] in diff_map:
            return [i, diff_map[nums[i]]]
        diff_map[target-nums[i]] = i
    return []