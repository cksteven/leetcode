class Solution {
    public int[] numberOfLines(int[] widths, String S) {
        int sum=0;
        int line=1;
        char[] charArray = S.toCharArray();
        for(char ch : charArray){
            if(sum+widths[ch-'a']>100){
                sum=widths[ch-'a'];
                line++;
            }else{
                sum+=widths[ch-'a'];
            }
        }
        int[] ans = new int[]{line,sum};
        return ans;
    }
}