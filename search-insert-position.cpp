class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]==target) return mid;
            else{
                if(nums[mid]>target) right=mid-1;
                else left=mid+1;
            }
        }
        return left;
    }
};
// https://leetcode.com/problems/search-insert-position/discuss/15080/My-8-line-Java-solution
