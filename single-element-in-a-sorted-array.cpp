class Solution {
public:
    int found=0,result;
    void binSearch(int l,int r,vector<int>& nums){
        if(found||l>r) return;
        int m=l+(r-l)/2;
        int flag=0;
        flag+=(m!=0&&nums[m-1]==nums[m])?2:0;
        flag+=(m!=nums.size()-1&&nums[m+1]==nums[m])?1:0;
        if(!flag){
            found=1;
            result=m;
        }
        if(flag>>1) binSearch(l,m-2,nums);
        else binSearch(l,m-1,nums);
        if(flag%1) binSearch(m+2,r,nums);
        else binSearch(m+1,r,nums);
    }
    int singleNonDuplicate(vector<int>& nums) {
        found=0;
        binSearch(0,nums.size()-1,nums);
        return nums[result];
    }
};