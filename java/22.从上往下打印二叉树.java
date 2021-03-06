import java.util.ArrayList;
import java.util.LinkedList;
/**
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(int val) {
        this.val = val;

    }

}
*/
public class Solution {
    public ArrayList<Integer> PrintFromTopToBottom(TreeNode root) {
        ArrayList<TreeNode> queue = new ArrayList<TreeNode>();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        if (root == null)
            return arr;
        queue.add(root);
        while(queue.size() != 0) {
            TreeNode temp = queue.remove(0);
            if(temp.left != null)
                queue.add(temp.left);
            if(temp.right != null)
                queue.add(temp.right);
            arr.add(temp.val);
        }
        return arr;
    }
}
