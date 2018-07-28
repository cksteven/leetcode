class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x0r=0,a=0,bit=1;
        vector<int> res;
        for(int i:nums)
            x0r^=i;
        while(!(x0r&bit))
            bit<<=1;
        for(int i:nums)
            if(bit&i)
               a^=i;
        res.push_back(a);
        res.push_back(a^x0r);
        return res;
    }
};
// https://leetcode.com/problems/single-number-iii/discuss/151677/Short-c++-solution-using-XOR.-O(n)-time-O(1)-space.-With-comments-and-description.