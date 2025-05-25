/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/

bool isSubsequence(string s, string t) {
    if(s.empty()) {
        return true;
    }
    int sub_seq_ptr = 0;
    for(int i = 0; i < t.size(); i++) {
        if(t[i] == s[sub_seq_ptr]) {
            sub_seq_ptr++;
        }
        if(sub_seq_ptr == s.size()) {
            return true;
        }
    }
    return false;
}