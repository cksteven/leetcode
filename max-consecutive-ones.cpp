class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,sum=0;
        for(auto const &i:nums)
            if(i==1)
                sum++;
            else{
                res=sum>res?sum:res;
                sum=0;
            }
        return sum>res?sum:res;
    }
};