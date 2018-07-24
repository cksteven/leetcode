class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int len=A.size();
        vector<int> diff1,diff2;
        stack<int> s;
        for(int i=1;i<len;i++) diff1.push_back(A[i]-A[i-1]);
        for(int i=1;i<len-1;i++) diff2.push_back(diff1[i]-diff1[i-1]);
        int res=0;
        for(int i:diff2){
            if(i==0){
                s.push(0);
                res+=s.size();
            }else{
                s=stack<int>();
            }
        }
        return res;
    }
};