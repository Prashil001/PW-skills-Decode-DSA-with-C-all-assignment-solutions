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
        bool symmetricTest(TreeNode* p, TreeNode* q){
            if(p==NULL && q==NULL) return true;
            if(p==NULL || q==NULL) return false;
            if(p->val != q->val) return false;
            return symmetricTest(p->left,q->right) && symmetricTest(p->right,q->left);
        }
        bool isSymmetric(TreeNode* root) {
            if(root == NULL) return true;
            return symmetricTest(root->left,root->right);
            
        }
    };