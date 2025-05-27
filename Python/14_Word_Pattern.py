'''
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

Each letter in pattern maps to exactly one unique word in s.
Each unique word in s maps to exactly one letter in pattern.
No two letters map to the same word, and no two words map to the same letter.
'''

def wordPattern(pattern, s):
    s = s.split(" ")
    if len(s) != len(pattern):
        return False
    word_map = {}
    used_letter = {}
    for i in range(len(pattern)):
        if s[i] in word_map:
            if word_map[s[i]] != pattern[i]:
                return False
        else:
            if pattern[i] in used_letter:
                return False
            word_map[s[i]] = pattern[i]
            used_letter[pattern[i]] = True
    return True