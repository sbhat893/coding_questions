'''
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
'''

def isIsomorphic(s, t):
    if len(s) != len(t):
        return False
    letter_map = {}
    used_letters = {}
    for i in range(len(s)):
        if s[i] in letter_map:
            if letter_map[s[i]] != t[i]:
                return False
        else:
            if t[i] in used_letters:
                return False
            letter_map[s[i]] = t[i]
            used_letters[t[i]] = True
    return True