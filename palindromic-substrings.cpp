class Solution {
public:
    int countSubstrings(string s) {
        int len=s.size(),res=0;
        for(int i=0;i<len*2-1;i++){
            int le=i/2, ri=le+i%2;
            while(le>=0&&ri<len&&s[le--]==s[ri++]) res++;
        }
        return res;
    }
};
// https://leetcode.com/problems/palindromic-substrings/solution/
