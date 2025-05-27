/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

Each letter in pattern maps to exactly one unique word in s.
Each unique word in s maps to exactly one letter in pattern.
No two letters map to the same word, and no two words map to the same letter.
*/

bool wordPattern(string pattern, string s) {
    stringstream iss(s);
    string token;
    unordered_map<string, char> word_map;
    unordered_map<char, bool> used_letters;
    vector<string> words;
    while(getline(iss, token, ' ')) {
        words.push_back(token);
    }
    if(pattern.size() != words.size()) {
        return false;
    }
    for(int i = 0; i < pattern.size(); i++) {
        if(word_map.find(words[i]) != word_map.end()) {
            if(word_map[words[i]] != pattern[i]) {
                return false;
            }
        } else {
            if(used_letters.find(pattern[i]) != used_letters.end()) {
                return false;
            }
            word_map[words[i]] = pattern[i];
            used_letters[pattern[i]] = true;
        }
    }
    return true;
}