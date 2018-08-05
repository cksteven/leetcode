class Solution {
public:
    int my_lower_bound(vector<int>& nums, int target){
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if (nums[mid] < target)
                l = mid+1;
            else
                r = mid-1;
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=my_lower_bound(nums,target);
        int r=my_lower_bound(nums,target+1)-1;
        if(l<nums.size()&&nums[l]==target)
            return {l,r};
        else
            return {-1,-1};
    }
};
