class Solution {
    public String reverseString(String s) {
        char[] arr = s.toCharArray();
        int len = arr.length;
        char[] ans= new char[len];
        for(int i=0;i<len;i++)
            ans[i]=arr[len-i-1];
        return new String(ans);
    }
}