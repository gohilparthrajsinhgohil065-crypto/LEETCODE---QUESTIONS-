class Solution {
public:
    TreeNode* head = nullptr;
    TreeNode* curr = nullptr;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);

        root->left = nullptr;

        if (head == nullptr) {
            head = root;
            curr = root;
        } 
        else {
            curr->right = root;
            curr = root;
        }

        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return head;
    }
};
