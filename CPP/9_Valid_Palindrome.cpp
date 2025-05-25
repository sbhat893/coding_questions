/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise
*/

bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    s = s.tolower();
    while(j > i) {
        if(!std::isalnum(s[i])){
            i++;
            continue;
        }
        if(!std::isalnum(s[j])){
            j--;
            continue;
        }
        if(std::tolower(s[j]) != std::tolower(s[i])) {
            return false;
        }
        i++; j--;
    }
    return true;
}