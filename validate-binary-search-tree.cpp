class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }
private:
    bool validate(TreeNode* node, TreeNode* low, TreeNode* high) {
        if (node == nullptr) {
            return true;
        }
        if ((low != nullptr && node->val <= low->val) || 
            (high != nullptr && node->val >= high->val)) {
            return false;
        }
        return validate(node->left, low, node) && 
               validate(node->right, node, high);
    }
};
