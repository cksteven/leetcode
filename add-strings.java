class Solution {
    public String addStrings(String num1, String num2) {
        if(num1.length()<num2.length()){
            String temp = num2;
            num2 = num1;
            num1 = temp;
        }
        for(int i=num1.length()-num2.length();i>0;i--)
            num2="0"+num2;
        String sum="";
        int carry=0;
        for(int i=num2.length()-1;i>=0;i--){
            int immediate = num1.charAt(i)+num2.charAt(i)-'0'-'0'+carry;
            sum = Character.toString((char)(immediate%10+'0')) + sum;
            carry = immediate/10;
        }
        if(carry==1)
            sum="1"+sum;
        return sum;
    }
}