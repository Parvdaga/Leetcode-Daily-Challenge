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

// private:
//     TreeNode* create(TreeNode* root,int val){
//         TreeNode* node= new TreeNode(val);
//         node->left=NULL;
//         node->right=NULL;
//         return node;
//     }

public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);
        }
        if(val< root->val){
            root->left= insertIntoBST(root->left,val); 
        }
        else{
            root->right= insertIntoBST(root->right,val);
        }
        return root;
    }
};