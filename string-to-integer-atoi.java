class Solution {
    public int myAtoi(String str) {
        str = str.trim();
        int firstNum = 0;
        while(firstNum<str.length()&&(str.charAt(firstNum)<'0'||str.charAt(firstNum)>'9'))
            firstNum++;
        if(firstNum==str.length())
            return 0;
        if(firstNum>1)
            return 0;
        int sign = 1;
        if(firstNum==1&&(str.charAt(0)!='+'&&str.charAt(0)!='-'))
            return 0;
        if(firstNum==1&&str.charAt(0)=='-')
            sign = -1;
        int lastNum = firstNum;
        while(lastNum<str.length()&&(str.charAt(lastNum)>='0'&&str.charAt(lastNum)<='9'))
            lastNum++;
        String absNum = str.substring(firstNum,lastNum);
        long num;
        try{
            num = Long.parseLong(absNum);
        }catch(NumberFormatException e){
            return (sign==1?2147483647:-2147483648);
        }
        
        if(sign==1&&num>=2147483647)
            return 2147483647;
        if(sign==-1&&num>=2147483648L) 
            return -2147483648;
        return sign*(int)num;
    }
}