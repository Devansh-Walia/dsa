// https://leetcode.com/problems/binary-tree-paths/submissions/ 

class Solution {
public:
    vector<string> ans;
    void solve(TreeNode * root, string str){
        if(root){
            if(!root->left && !root->right){
                str+=to_string(root->val);
                ans.push_back(str);
            }
            if(root->left)
                solve(root->left, str+to_string(root->val)+"->");
            if(root->right)
                solve(root->right, str+to_string(root->val)+"->");
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root, "");
        return ans;
    }
};
