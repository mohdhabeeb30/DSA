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
     void getRightView(TreeNode *root,int level,vector<int> &result){
        if(root==nullptr) return;
        // pahli baar aaye hai toh right most hai kunki hum pahle right ja rhe hain then left maan lo 0 hai result me 0 hai toh condtion level(0)==seult.size(0) hai toh pahli baar aye hain uski value result me daalo
        if(level==result.size()){
            result.push_back(root->val);
        }
         getRightView(root->right,level+1,result);
         getRightView(root->left,level+1,result);
         

     }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        getRightView(root, 0, result);
        return result;
        
    }
};