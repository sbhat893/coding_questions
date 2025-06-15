/*
Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
*/

int hammingWeight(int n) {
    int setBits = 0;
    while(n | 0) {
        if(n & 1){
            setBits++;
        }
        n >>= 1;
    }
    return setBits;
}