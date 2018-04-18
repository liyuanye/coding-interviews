/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1 == nullptr || pRoot2 == nullptr)
            return false;
        return isSame(pRoot1, pRoot2) || HasSubtree(pRoot1 -> left, pRoot2) || HasSubtree(pRoot1 -> right, pRoot2);
    }
    
    bool isSame(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot2 == nullptr)
            return true;
        if(pRoot1 == nullptr && pRoot2 != nullptr)
            return false;
        return pRoot1 -> val == pRoot2 -> val && isSame(pRoot1 -> left, pRoot2 -> left) && isSame(pRoot1 -> right, pRoot2 -> right);
    }
};
