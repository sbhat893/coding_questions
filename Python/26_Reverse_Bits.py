'''
Reverse bits of a given 32 bits unsigned integer.
'''

def reverseBits(n: int) -> int:
    result = 0
    for i in range(32):
        result <<= 1
        result |= (n & 1)
        n = n >> 1
    return result