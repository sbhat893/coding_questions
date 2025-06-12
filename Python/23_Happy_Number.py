'''
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
'''

def sum_of_digits(n: int) -> int:
    sum = 0
    while n > 0:
        digit = n % 10
        n = n // 10
        sum += digit*digit
    return sum

def isHappy(n: int) -> bool:
    slow = n
    fast = n
    while True:
        slow = sum_of_digits(slow)
        fast = sum_of_digits(sum_of_digits(fast))
        if slow == 1:
            return True
        if slow == fast:
            return False
    return False