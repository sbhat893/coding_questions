'''
Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
'''

def addBinary(a: str, b: str) -> str:
    result = ""
    i = len(a) - 1
    j = len(b) - 1
    sum = 0
    carry = 0
    while i >= 0  and j >= 0:
        sum = (int(a[i]) ^ int(b[j])) ^ carry
        carry = int(a[i]) & int(b[j]) |\
                int(b[j]) & carry |\
                int(a[i]) & carry
        result += str(sum)
        i -= 1
        j -= 1
    while i >= 0:
        sum = (int(a[i]) ^ 0) ^ carry
        carry = int(a[i]) & carry
        result += str(sum)
        i -= 1
    while j >= 0:
        sum = (int(b[j]) ^ 0) ^ carry
        carry = int(b[j]) & carry
        result += str(sum)
        j -= 1
    if carry == 1:
        result += str(carry)  
    return result[::-1]