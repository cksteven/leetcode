class Solution {
public:
    void backtrack(string s,int i,vector<string>& v){
        if(i==s.size()){
            v.push_back(s);
            return;
        }
        backtrack(s,i+1,v);
        if(isalpha(s[i])){
            s[i]^=(1<<5); // toggle char
            backtrack(s,i+1,v);
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        backtrack(S,0,res);
        return res;
    }
};
// https://leetcode.com/problems/letter-case-permutation/discuss/115515/C++-backtrack-solution-w-trickletter-case-permutation
