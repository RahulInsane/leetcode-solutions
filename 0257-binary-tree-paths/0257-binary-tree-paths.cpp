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
    void create(TreeNode* root, vector<string>&ans,string path){
       if(root==NULL) return;
       if(path.empty()){
        path=to_string(root->val);
       }
       else{
        path+="->"+ to_string(root->val);
       }
       if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            return;
       }
       create(root->left,ans,path);
       create(root->right,ans,path);


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL) return ans;
        string path;
        create(root, ans,path);
        return ans;
    }
};