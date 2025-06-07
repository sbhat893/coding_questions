'''
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
'''

def lengthOfLastWord(s):
    s = s.strip().split()
    if not s:
        return 0
    return len(s[-1])