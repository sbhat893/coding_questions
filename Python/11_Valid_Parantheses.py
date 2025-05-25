'''
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
'''

def isValid(s):
    b_stack = []
    for c in s:
        if c == '(':
            b_stack.append(')')
        elif c == '[':
            b_stack.append(']')
        elif c == '{':
            b_stack.append('}')
        elif ( not b_stack ) or b_stack.pop() != c:
            return False
    return b_stack.empty()