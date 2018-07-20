class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int w=matrix.size();
        int l=matrix[0].size();
        for(int k=0;k<l;k++){
            int value=matrix[0][k];
            int flag=true;
            for(int i=1, j=k+1;;i++,j++){
                if(i>=w||j>=l) break;
                if(matrix[i][j]!=value){
                    flag=false;
                    break;
                }
            }
            if(!flag) return false;
        }
        for(int k=1;k<w;k++){
            int value=matrix[k][0];
            int flag=true;
            for(int i=k+1, j=1;;i++,j++){
                if(i>=w||j>=l) break;
                if(matrix[i][j]!=value){
                    flag=false;
                    break;
                }
            }
            if(!flag) return false;
        }
        return true;
    }
};