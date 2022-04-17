class Solution {
    
    void dfs(TreeNode* root, TreeNode*& tmp) {
        if(!root) return;
        dfs(root->left, tmp);
        TreeNode* newNode = new TreeNode(root->val);
        tmp->right = newNode;
        tmp = tmp->right;
        dfs(root->right, tmp);
        return;
    }

public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* tmp = new TreeNode(0);
        TreeNode* ans = tmp;
        dfs(root, tmp);
        return ans->right;
    }
};