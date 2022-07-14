///https://leetcode.com/problems/balanced-binary-tree/submissions/

class Solution {
public:
     bool isBalanced(TreeNode* root) {
        return dfsBalance(root)!=-1;
    }
       
      int dfsBalance(TreeNode* root){
          //base case
          if(root==NULL)return 0;
          
          int leftHeight=dfsBalance(root->left);
          if(leftHeight==-1) return -1;
          
          int rightHeight=dfsBalance(root->right);
          if(rightHeight==-1) return -1;
          
          if(abs(leftHeight-rightHeight)>1) return -1;
          return max(leftHeight,rightHeight)+1;
          
    }
};



class Solution {
public:
    int height(TreeNode*root) {
        if(root==NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(isBalanced(root->left)&&isBalanced(root->right)) {
            if(abs(height(root->left)-height(root->right))<=1) return true;
        }
        return false;
    }
};