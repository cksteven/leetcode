class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum=0;
        int w=grid.size();
        int l=grid[0].size();
        for(int i=0;i<w;i++)
            for(int j=0;j<l;j++){
                if(!grid[i][j]) continue;
                int res=0;
                if(j==0||!grid[i][j-1]) res++;
                if(i==0||!grid[i-1][j]) res++;
                if(j==l-1||!grid[i][j+1]) res++;
                if(i==w-1||!grid[i+1][j]) res++;
                sum+=res;
            }        
        return sum;
    }
};