/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
*/

bool canConstruct(string ransomNote, string magazine) {
    if(magazine.size() < ransomNote.size()) {
        return false;
    }
    unordered_map<char, int> note_counter;
    for(int i = 0; i < magazine.size(); i++) {
            note_counter[magazine[i]]++;
    }
    for(int i = 0; i < ransomNote.size(); i++) {
        if(note_counter[ransomNote[i]] > 0) {
            note_counter[ransomNote[i]]--;
        } else {
            return false;
        }
    }
    return true;
}