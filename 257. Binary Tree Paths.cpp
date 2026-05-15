class Solution {
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> result;
        if (root != nullptr) {
            dfs(root, "", result);
        }
        return result;
    }
private:
    void dfs(TreeNode* node, std::string path, std::vector<std::string>& result) {
        path += std::to_string(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(path);
            return;
        }
        if (node->left != nullptr) {
            dfs(node->left, path + "->", result);
        }
        if (node->right != nullptr) {
            dfs(node->right, path + "->", result);
        }
    }
};
