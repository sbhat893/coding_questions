/*
Reverse bits of a given 32 bits unsigned integer.
*/

uint32_t reverseBits(uint32_t n) {
  int result = 0;
  for(int i = 0; i < 32; i++) {
    result = result << 1;
    result = result | (n & 1);
    n = n >> 1;
  }
  return result;
}