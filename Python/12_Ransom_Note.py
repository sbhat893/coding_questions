'''
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
'''

def canConstruct(ransomNote, magazine):
    note_counter = {}
    for c in magazine:
        if c not in note_counter:
            note_counter[c] = 1
        else:
            note_counter[c] += 1
    for c in ransomNote:
        if c not in note_counter:
            return False
        if note_counter[c] > 0:
            note_counter[c] -=1
        else:
            return False
    return True