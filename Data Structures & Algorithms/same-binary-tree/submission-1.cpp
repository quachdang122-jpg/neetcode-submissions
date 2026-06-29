class Solution {
   public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        return dfs(p, q) != -1;
    }

   private:
    int dfs(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return 1;
        if (p == nullptr || q == nullptr) return -1;
        if (p->val != q->val) {
            return -1;
        }
        int l = dfs(p->left, q->left);
        if(l == -1) return -1;
        int r = dfs(p->right, q->right);
        if(r == -1) return -1;
        return max(l, r) + 1;
    }
};
