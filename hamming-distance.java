class Solution {
    public int hammingDistance(int x, int y) {
        int num = x ^ y;
        int sum = 0;
        while(num > 0){
            sum += num % 2;
            num /= 2;
        }
        return sum;
    }
}