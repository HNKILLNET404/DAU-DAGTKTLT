class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        
        int l = 0, r = 0;
        TreeNode *leftPtr = root, *rightPtr = root;
        
        while (leftPtr) {
            l++;
            leftPtr = leftPtr->left;
        }
        while (rightPtr) {
            r++;
            rightPtr = rightPtr->right;
        }
        
        if (l == r) return (1 << l) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
