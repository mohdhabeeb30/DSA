/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        TreeNode *leftnode=root;
        TreeNode *rightnode=root;
        int leftheight=0;
        int rightheight=0;
        // left height
        while(leftnode!=nullptr){
           leftheight++;
           leftnode=leftnode->left; 
        }
        // right height
        while(rightnode!=nullptr){
          rightheight++;
           rightnode=rightnode->right; 
        }
        // agar barabar hai toh formula 
        if(leftheight==rightheight){
            return(1<<rightheight)-1; // 2*h-1
        } // nhi barabar toh call kr lenge
        return 1+ countNodes(root->left)+countNodes(root->right);
    }
};