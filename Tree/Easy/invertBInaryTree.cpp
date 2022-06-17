//https://leetcode.com/problems/invert-binary-tree/submissions/


/**
* Idea here? 
* well you see what we doo is we define a new tree where we will save the inverse of the old tree.
* now we send it to the solve function where we take the absolute address of both the root and the inverse
* so as to manipulate the origin itself. 
* now we add the value of root to the inverse since we clearly need to do that (1st root is same)
* then we check if the root has a right and send the control to right subtree of root but 
  with left subtree of inverse which essentially takes the opposite route to traversing the tree.
  now we add the root to the tree since we are in opposite places already
* we do the same with the left subtree of root and send inverse to track the right sub tree. 
*/
class Solution {
public:
    void solve(TreeNode* &root, TreeNode* &inv){
        if(!root)return;
        inv = new TreeNode(root->val);
        if(root->left)solve(root->left, inv->right);
        if(root->right) solve(root->right, inv->left);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return root;
        TreeNode *inv;
        solve(root, inv);
        return inv;
    }
};

/**
 * Idea 2
 * original idea, to swap the right and left nodes
 * swap and traverse left and right separately 
 */
 class Solution {
public:
    TreeNode* temp;
    void solve2(TreeNode *root){
        if(!root)return;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        solve2(root->left);
        solve2(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        solve2(root);
        return root;
    }
};