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
    map<int,int> res;
    int hcount;
    int lrn(TreeNode* root){
        if(root==NULL) return 0;
        int l=lrn(root->left);
        int r=lrn(root->right);
        int sum=l+r+root->val;
        res[sum]=1+(res.count(sum)?res[sum]:0); // add brackets!
        hcount=max(hcount,res[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        res=map<int,int>();
        hcount=0;
        lrn(root);
        vector<int> most;
        for(auto const& x:res)
            if(x.second==hcount) most.push_back(x.first);
        return most;
    }
};
// https://leetcode.com/problems/most-frequent-subtree-sum/discuss/98664/Verbose-Java-solution-postOrder-traverse-HashMap-(18ms)
