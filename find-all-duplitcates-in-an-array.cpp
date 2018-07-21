class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // set<int> s;
        // vector<int> res;
        // for(int i:nums)
        //     if(s.count(i)==0)
        //         s.insert(i);
        //     else
        //         res.push_back(i);
        // return res;

        // no extra space, O(n)
        vector<int> res;
        int len=nums.size();
        int i=0;
        while(i<len){
            if(nums[i]==i+1||nums[i]==-1){
                i++;
                continue;
            }
            int j=nums[i]-1;
            if(j+1==nums[j]){
                res.push_back(nums[i]);
                nums[i]=-1;
                i++;
                continue;
            }
            swap(nums[i],nums[j]);
        }
        return res;
    }
};
// https://leetcode.com/problems/find-all-duplicates-in-an-array/discuss/92411/Java-O(1)-space-O(n)-time-solution-with-swapping