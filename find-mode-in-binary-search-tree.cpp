class Solution {
private:
    int currentVal = 0;
    int currentCount = 0;
    int maxCount = 0;
    vector<int> modes;
    
    void inorder(TreeNode* root) {
        if (!root) return;
        
        inorder(root->left);
        
        if (currentCount == 0) {
            currentCount = 1;
            currentVal = root->val;
        } else if (currentVal == root->val) {
            currentCount++;
        } else {
            currentCount = 1;
            currentVal = root->val;
        }
        
        if (currentCount == maxCount) {
            modes.push_back(currentVal);
        } else if (currentCount > maxCount) {
            maxCount = currentCount;
            modes.clear();
            modes.push_back(currentVal);
        }
        
        inorder(root->right);
    }
    
public:
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return modes;
    }
};
