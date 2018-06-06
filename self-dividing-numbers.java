class Solution {
    private boolean isLegal(int n){
        int origin = n;
        while(n>0){
            int r=n%10;
            if(r==0)
                return false;
            if(origin%r!=0)
                return false;
            n=n/10;
        }
        return true;
    }
    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        for(int i=left;i<=right;i++)
            if(isLegal(i))
                ans.add(i);
        return ans;
    }
}