/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/

bool isIsomorphic(string s, string t) {
    if(s.size() != t.size()) {
        return false;
    }
    unordered_map<char, char> letter_map;
    unordered_map<char, bool> used_letters;
    for(int i = 0; i < s.size(); i++) {
        if(letter_map.find(s[i]) != letter_map.end()){
            if(letter_map[s[i]] != t[i]) {
                return false;
            }
        } else {
            if(used_letters.find(t[i]) != used_letters.end()) {
                return false;
            }
            used_letters[t[i]] = true;
            letter_map[s[i]] = t[i];
        }
    }
    return true;
}