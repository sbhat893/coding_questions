/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
*/

string addBinary(string a, string b) {
    string result = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int sum = 0;
    int carry = 0;
    while(i >= 0 && j >= 0) {
        sum = ((a[i] - '0') ^ (b[j] - '0')) ^ carry;
        carry = ((a[i] - '0') & (b[j] - '0')) |
                ((b[j] - '0') & carry) |
                ((a[i] - '0') & carry);
        result += to_string(sum);
        i--; j--;
    }
    while(i >= 0) {
        sum = ((a[i] - '0') ^ 0) ^ carry;
        carry = (a[i] - '0') & carry;
        result += to_string(sum);
        i--;
    }
    while(j >= 0) {
        sum = ((b[j] - '0') ^ 0) ^ carry;
        carry = (b[j] - '0') & carry;
        result += to_string(sum);
        j--;
    }
    if(carry == 1){
        result += to_string(carry);
    }
    reverse(result.begin(), result.end());
    return result;
}