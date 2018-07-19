class Solution {
public:
    int inv[2]= {1,0};
    vector<int> toggleRow(vector<int> row){
        vector<int> newrow;
        for(int i:row)
            newrow.push_back(inv[i]);
        return newrow;
    }
    int convertRowToInt(vector<int> row){
        int res=0;
        int l=row.size();
        int count=0;
        for(int i:row){
            count++;
            if(i==1) res+=1<<(l-count);
        }
        return res;
    }
    vector<int> convertColumnToRow(vector<vector<int>> matrix,int columnIndex){
        vector<int> res;
        for(vector<int> row:matrix)
            res.push_back(row[columnIndex]);
        return res;
    }
    void insertColumnToMatrix(vector<vector<int>>& matrix,vector<int> row){
        int l=row.size();
        for(int i=0;i<l;i++)
            matrix[i].push_back(row[i]);
    }
    int convertColumnToInt(vector<int> row){
        int res=0;
        for(int i:row)
            if(i==1) res++;
        return res;
    }
    int matrixScore(vector<vector<int>>& A) {
        vector<vector<int>> res;
        for(vector<int> row:A){
            vector<int> newrow=toggleRow(row);
            if(convertRowToInt(newrow)>convertRowToInt(row))
                res.push_back(newrow);
            else
                res.push_back(row);
        }
        vector<vector<int>> res2;
        for(int i=A.size()-1;i>=0;i--)
            res2.push_back({});
        
        int len=A[0].size();
        for(int i=0;i<len;i++){
            vector<int> oldrow=convertColumnToRow(res,i);
            vector<int> newrow=toggleRow(oldrow);
            if(convertColumnToInt(newrow)>convertColumnToInt(oldrow))  // compare numbers of 1, not value
                insertColumnToMatrix(res2,newrow);
            else
                insertColumnToMatrix(res2,oldrow);
        }
        
        int sum=0;
        for(vector<int> row:res2)
            sum+=convertRowToInt(row);
        return sum;
    }
};