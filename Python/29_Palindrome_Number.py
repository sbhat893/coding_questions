'''
Given an integer x, return true if x is a palindrome, and false otherwise.
'''

def get_reverse(n : int) -> int:
    reverse = 0
    digit = 0
    while(n > 0):
        digit = n % 10
        reverse = (reverse * 10) + digit
        n = n // 10
    return reverse
    
def isPalindrome(x: int) -> bool:
    return x == get_reverse(x)