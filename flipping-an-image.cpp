class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> res;
        int c[2] = {1,0};
        for(vector<int> row:A){
            vector<int> newrow;
            for(vector<int>::iterator it=--row.end();it!=row.begin();--it){
                newrow.push_back(c[*it]);
            }
            newrow.push_back(c[*row.begin()]);
            res.push_back(newrow);
        }
        return res;
    }
};