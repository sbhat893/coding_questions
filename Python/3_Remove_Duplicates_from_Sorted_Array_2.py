"""
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
"""

def removeDuplicates(nums):
    if len(nums) == 0 or len(nums) == 1 or len(nums) == 2:
        return len(nums)
    pos = 2
    for i in range(2, len(nums)):
        if nums[i] != nums[pos - 2]:
            nums[pos] = nums[i]
            pos += 1
    return pos