class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int w=nums.size();
        int l=nums[0].size(); //WA
        if(w*l!=r*c) return nums;
        vector<int> tmp;
        for(vector<int> row:nums)
            for(int i:row)
                tmp.push_back(i);
        vector<vector<int>> res;
        vector<int>::iterator it=tmp.begin();
        for(int i=0;i<r;i++){
            vector<int> row;
            for(int j=0;j<c;j++)
                row.push_back(*(it++));
            res.push_back(row);
        }
        return res;
    }
};