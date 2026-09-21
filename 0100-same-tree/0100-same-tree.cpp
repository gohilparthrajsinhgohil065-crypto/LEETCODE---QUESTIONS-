class Solution {
public:
    bool same(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;

        if (p == NULL || q == NULL)
            return false;

        if (p->val != q->val)
            return false;

        return same(p->left, q->left) &&
               same(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p, q);
    }
};