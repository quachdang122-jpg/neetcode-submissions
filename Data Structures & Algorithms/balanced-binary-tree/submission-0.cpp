class Solution {
public:
    bool isBalanced(TreeNode* root) {
    int h = 0;
    if(root == nullptr) return true;
    return dfs(root) != -1;
    }
private:
    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;
        int l = dfs(root->left);
            if(l == -1)
                return -1;
        int r = dfs(root->right);
            if(r == -1)
                return -1;
        if(abs(r-l)>1) return -1;
        return 1 + max(l,r);
    }
};
