/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
*/

int lengthOfLastWord(string s) {
    int count = 0;
    bool is_counting = false;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] != ' ') {
            is_counting = true;
            count++;
        } else if(is_counting) {
            break;
        }
    }
    return count;
}