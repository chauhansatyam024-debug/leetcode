/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode reverseOddLevels(TreeNode root) {
        rev(root.left,root.right,1);
        return root;
    }
    public void rev(TreeNode t1 , TreeNode t2, int level){
        if(t1 == null || t2 == null){
            return;
        }
        if(level % 2 == 1){
            int temp = t1.val;
            t1.val = t2.val;
            t2.val = temp;
        }
        rev(t1.left,t2.right,level+1);
        rev(t1.right,t2.left,level+1);
    }
}