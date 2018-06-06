class Solution {
    public int reverse(int x) {
        int sign = 1;
        if(x < 0){
            sign = -1;
            x = -x;
        }
        long absNum = 0;
        while(x > 0){
            absNum = absNum * 10 + x % 10;
            x = x / 10;
        }
        if(sign == 1 && absNum > 2147483647)
            return 0;
        if(absNum > 2147483648L)
            return 0;
        return sign * (int) absNum;
    }
}