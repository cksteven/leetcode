class Solution {
public:
    vector<vector<int>> res;
    int len;
    vector<int> nums; // do not add &
    void backtrack(vector<int> used,int remain,int start){
        if(remain<0) return;
        if(remain==0){ res.push_back(used); return;}
        for(int i=start;i<len;i++){
            used.push_back(nums[i]);
            backtrack(used,remain-nums[i],i);
            used.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res=vector<vector<int>>();
        len=candidates.size();
        sort(candidates.begin(),candidates.end());
        nums=candidates;
        backtrack(vector<int>(),target,0);
        return res;
    }
};
// https://leetcode.com/problems/combination-sum/discuss/16502/A-general-approach-to-backtracking-questions-in-Java-(Subsets-Permutations-Combination-Sum-Palindrome-Partitioning)
