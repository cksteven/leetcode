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
  vector<int> Level;
  int height(TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
  }
  void printLevel(TreeNode* root, int level) {
    if (root == NULL) return;
    if (level == 0)
      Level.push_back(root->val);
    else {
      printLevel(root->left, level - 1);
      printLevel(root->right, level - 1);
    }
  }
  vector<double> averageOfLevels(TreeNode* root) {
    int h = height(root);
    vector<double> result;
    for (int i = 0; i < h; i++) {
      Level = vector<int>();
      printLevel(root, i);
      double aver = 0;
      for (int i : Level) aver += i;
      aver /= Level.size();
      result.push_back(aver);
    }
    return result;
  }
};