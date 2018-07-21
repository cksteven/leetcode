class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> decreasing;
        map<int,int> mapping;
        for(int i:nums){
            while(!decreasing.empty()&&decreasing.top()<i){ // use while, not if
                mapping[decreasing.top()]=i;
                decreasing.pop();
            }
            decreasing.push(i); // always push
        }
        vector<int> res;
        for(int i:findNums)
            if(mapping.count(i)==0)
                res.push_back(-1);
            else
                res.push_back(mapping[i]);
        return res;
    }
};
//https://leetcode.com/problems/next-greater-element-i/discuss/97595/Java-10-lines-linear-time-complexity-O(n)-with-explanation