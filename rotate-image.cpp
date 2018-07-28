class Solution {
public:
    void _swap(int *a,int *b, int *c, int *d){
        int t=*d;
        *d=*c;
        *c=*b;
        *b=*a;
        *a=t;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n-2*i-1;j++){
                _swap(&matrix[i][i+j],&matrix[i+j][n-i-1],&matrix[n-i-1][n-i-1-j],&matrix[n-i-1-j][i]);
            }
        }
    }
};