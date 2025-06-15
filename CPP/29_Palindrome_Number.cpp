/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

long long get_reverse(int n) {
    long long reverse = 0;
    int digit = 0;
    while(n > 0){
        digit = n % 10;
        reverse = (reverse * 10) + digit;
        n = n / 10;
    }
    return reverse;
}

bool isPalindrome(int x) {
    return x == get_reverse(x);
}