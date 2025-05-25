/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
*/

bool isValid(string s) {
    int top = -1;
    for(char c:s) {
        if(c == '(') {
            s[++top] = ')';
        } else if (c == '{') {
            s[++top] = '}';
        } else if (c == '[') {
            s[++top] = ']';
        } else {
            if (top ==  -1) {
                return false;
            }
            char cmp = s[top--];
            if(cmp != c) {
                return false;
            }
        }
    }
    return top == -1;
}