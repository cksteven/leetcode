class Solution {
 public:
  bool hasAlternatingBits(int n) {
    int a = 0xaaaaaaaa, b = 0x55555555, t = n, l = 0;
    while (t > 0) {
      l++;
      t >>= 1;
    }
    t = (1 << l) - 1;
    return (((n ^ a) & t) == 0) || (((n ^ b) & t) == 0);
  }
};