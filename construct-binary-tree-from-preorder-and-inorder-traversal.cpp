class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inMap[inorder[i]] = i;
        }
        int preIndex = 0;
        return build(preorder, inorder, preIndex, 0, inorder.size() - 1, inMap);
    }

private:
    TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, int& preIndex, int inStart, int inEnd, const unordered_map<int, int>& inMap) {
        if (inStart > inEnd) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        int inIndex = inMap.at(root->val);
        
        root->left = build(preorder, inorder, preIndex, inStart, inIndex - 1, inMap);
        root->right = build(preorder, inorder, preIndex, inIndex + 1, inEnd, inMap);
        
        return root;
    }
};
