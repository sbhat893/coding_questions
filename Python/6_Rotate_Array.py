'''
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
'''

def rotate(self, nums, k):
    """
    Do not return anything, modify nums in-place instead.
    """
    k = k % len(nums)
    nums.reverse()
    nums[:k] = reversed(nums[:k])
    nums[k:] = reversed(nums[k:])