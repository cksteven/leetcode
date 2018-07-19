class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res;
        int n=A.size();
        int m=A[0].size();
        for(int i=0;i<m;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(A[j][i]);
            }
            res.push_back(row);
        }
        return res;
    }
};