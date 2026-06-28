class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
    int res = 0;
    dfs(root,res);
    return res;
    }
private:
    int dfs(TreeNode *root, int &res)
    {
        if(root==nullptr)
            return 0;
        int ke1 = dfs(root->right, res);
        int ke2 = dfs(root->left, res);
        res = max(res,ke2+ke1);
        return 1 + max(ke1, ke2);
    }
};
