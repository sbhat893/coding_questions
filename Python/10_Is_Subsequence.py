'''
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
'''

def isSubsequence(s, t):
    if(s == ""):
        return True
    sub_seq_ptr = 0
    for i in range(len(t)):
        if t[i] == s[sub_seq_ptr]:
            sub_seq_ptr += 1
        if sub_seq_ptr == len(s):
            return True
    return False