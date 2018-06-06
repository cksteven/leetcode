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
    private int containsNoOne(TreeNode node){
        if(node==null)
            return -1;
        int l=containsNoOne(node.left);
        int r=containsNoOne(node.right);
        if(l==1)
            node.left=null;
        if(r==1)
            node.right=null;
        if(l!=0&&r!=0)
            return (node.val==0?1:0);
        else
            return 0;
    }
    public TreeNode pruneTree(TreeNode root) {
        containsNoOne(root);
        return root;
    }
}