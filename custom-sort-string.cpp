class Solution {
public:
    string customSortString(string S, string T) {
        int count[26]={0};
        int flag[26]={0};
        for(char c:T)
            count[c-'a']++;
        string res="";
        for(char c:S){
            flag[c-'a']++;
            for(int i=count[c-'a'];i>0;i--)
                res+=c;
        }
        for(int i=0;i<26;i++)
            if(!flag[i])
                for(int j=count[i];j>0;j--)
                    res+='a'+i;
        return res;
    }
};