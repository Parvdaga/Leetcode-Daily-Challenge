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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
           int size= q.size();
           long mini=q.front().second;
           long long first,last;
           for(int i=0;i<size;i++){
            long long cur = q.front().second -mini;
            TreeNode* Node = q.front().first;
            q.pop();
            if(i==0) first=cur;
            if(i==size-1) last=cur;
            if(Node->left){
                q.push({Node->left,cur*2+1});
            }
            if(Node->right){
                q.push({Node->right,cur*2+2});
            }
            int width = last - first + 1;
            ans=max(ans,width);
           }
           
        }
        return ans;
    }
};