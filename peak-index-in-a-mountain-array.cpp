class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int maxIndex=0;
        int max=-1;
        int len=A.size();
        for(int i=0;i<len;i++)
            if(A[i]>max){
                max=A[i];
                maxIndex=i;
            }
        return maxIndex;
    }
};