
#include<iostream>
#include <climits>
using namespace std;


class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
class Solution {
    public:
    
        int levels(TreeNode* root){
            if(root == NULL) return 0;
            return 1 + max(levels(root->left) , levels(root->right));
        }
        bool isBalanced(TreeNode* root) {
            if(!root) return true;
            if(abs(levels(root->left) - levels(root->right)) > 1) return false;
            
            if(!isBalanced(root->left)) return false;
            if(!isBalanced(root->right)) return false;
            return true;
        }
    };