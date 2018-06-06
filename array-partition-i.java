class Solution {
    public int arrayPairSum(int[] nums) {
        int sum=0;
        Arrays.sort(nums);
        for(int i=nums.length-2;i>=0;i=i-2)
            sum+=nums[i];
        return sum;
    }
}