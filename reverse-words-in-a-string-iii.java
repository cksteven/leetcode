class Solution {
    public String reverseWords(String s) {
        String[] words=s.split(" ");
        for(int i=0;i<words.length;i++){
            char[] arr = words[i].toCharArray();
            int len = arr.length;
            char[] ans = new char[len];
            for(int j=0;j<len;j++)
                ans[j] = arr[len-j-1];
            words[i] = new String(ans);
        }
        return String.join(" ", words);
    }
}