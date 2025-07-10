/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*> parent;

    void inorder(TreeNode*root){
        if(root==NULL) return;
        if(root->left != NULL){
            parent[root->left]=root;
            inorder(root->left);
        }
        if(root->right !=NULL){
            parent[root->right]=root;
            inorder(root->right);
        } 
    }
    void bfs(TreeNode* target, int k, vector<int> &result){
        queue<TreeNode*> q;
        q.push(target);
        unordered_set<TreeNode*> visited;
        visited.insert(target);
        while(!q.empty()){
            int size=q.size();
            if(k==0) break;
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left !=NULL && visited.find(curr->left) == visited.end()){
                    q.push(curr->left);
                    visited.insert(curr->left);
                }
                if(curr->right !=NULL && visited.find(curr->right) == visited.end()){
                    q.push(curr->right);
                    visited.insert(curr->right);
                }
                if(parent.count(curr) && visited.find(parent[curr]) == visited.end()){
                    q.push(parent[curr]);
                    visited.insert(parent[curr]);
                }
            }
            k--;
        }
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            result.push_back(temp->val);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> result;
        inorder(root);
        bfs(target,k,result);
        return result;
    }
};