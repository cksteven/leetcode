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
        return max(height(root->left),height(root->right))+1;
    }
    vector<int> level;
    void printLevel(TreeNode* root, int l){
        if(root==NULL) return;
        if(l==0) level.push_back(root->val);
        else{
            printLevel(root->left,l-1);
            printLevel(root->right,l-1);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        int h=height(root);
        vector<vector<int>> levels;
        for(int i=0;i<h;i++){
            level=vector<int>();
            printLevel(root,i);
            levels.push_back(level);
        }
        for(int i=0;i<h;i++)
            sort(levels[i].begin(),levels[i].end());
        level=vector<int>();
        for(int i=0;i<h;i++)
            level.push_back(levels[i][levels[i].size()-1]);
        return level;
    }
};