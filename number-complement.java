class Solution {
    public int findComplement(int num) {
        int count=0;
        int origin=num;
        while(num>0){
            count++;
            num=num>>1;
        }
        return (~origin)&((1<<count)-1);
    }
}