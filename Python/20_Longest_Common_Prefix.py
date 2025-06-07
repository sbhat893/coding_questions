'''
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
'''

def longestCommonPrefix(strs):
    strs = sorted(strs)
    common_prefix = ""
    for i in range(min(len(strs[0]), len(strs[-1]))):
        if strs[0][i] != strs[-1][i]:
            return common_prefix
        common_prefix += strs[0][i]
    return common_prefix