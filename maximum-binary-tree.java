/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        return helper(nums,0,nums.length);
    }
    private TreeNode helper(int[] nums,int head,int rear){
        if(rear<=head) return null;
        int maxValue=Integer.MIN_VALUE;
        int maxIndex=0;
        for(int i = head; i < rear; i++)
            if(nums[i] > maxValue){
                maxValue = nums[i];
                maxIndex = i;
            }
        TreeNode result = new TreeNode(maxValue);
        result.left = helper(nums,head,maxIndex);
        result.right = helper(nums,maxIndex + 1, rear);
        return result;
    }
}