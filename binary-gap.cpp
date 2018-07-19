class Solution {
public:
    int solve(vector<int> s){
        int len=s.size();
        bool flag=false;
        int left=0;
        int right=0;
        int max=0;
        for(int i=0;i<len;i++){
            if(!flag&&i>0&&s[i]==0&&s[i-1]==1){
                flag=true;
                left=i-1;
            }
            if(flag&&i<len-1&&s[i]==0&&s[i+1]==1){
                flag=false;
                right=i+1;
                if(right-left>max) max=right-left;
                continue;
            }
        }
        return max;
    }
    int binaryGap(int N) {
        vector<int> s;
        while(N){
            s.push_back(N%2);
            N/=2;
        }
        return solve(s);
    }
};