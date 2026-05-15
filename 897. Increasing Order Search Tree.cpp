class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        TreeNode* current = dummy;
        inorder(root, current);
        return dummy->right;
    }
private:
    void inorder(TreeNode* node, TreeNode*& current) {
        if (!node) return;
        inorder(node->left, current);
        node->left = nullptr;
        current->right = node;
        current = node;
        inorder(node->right, current);
    }
}; 	
