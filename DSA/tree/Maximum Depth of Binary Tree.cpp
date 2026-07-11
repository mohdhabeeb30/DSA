class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            depth++;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
        }

        return depth;
    }
};
  // 2nd approach using recursion
  