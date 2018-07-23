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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int found=0,result=-1;
    void printLevel(TreeNode* root,int l){
        if(found||root==NULL) return;
        if(l==0) {
            found=1;
            result=root->val;
        }else{
            printLevel(root->left,l-1);
            printLevel(root->right,l-1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        found=0;
        printLevel(root,height(root)-1);
        return result;
    }
};