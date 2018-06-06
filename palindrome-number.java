class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        if(x==0)
            return true;
        ArrayList<Integer> digits = new ArrayList<Integer>();
        while(x>0){
            digits.add(x%10);
            x = x/10;
        }
        for(int i = digits.size()/2-1;i>=0;i--){
            if(digits.get(i)!=digits.get(digits.size()-i-1))
                return false;
        }
        return true;
    }
}