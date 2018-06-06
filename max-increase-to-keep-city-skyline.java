class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int sum = 0;
        int len = grid.length;
        int[] colMax = new int[len];
        int[] rowMax = new int[len];
        for(int i = 0; i < len; i++)
            for(int j = 0; j < len; j++){
                if(grid[i][j] > colMax[i]) colMax[i] = grid[i][j];
                if(grid[j][i] > rowMax[i]) rowMax[i] = grid[j][i];
            }
        for(int i = 0; i < len; i++)
            for(int j = 0; j < len; j++)
                sum += Math.min(rowMax[i],colMax[j]) - grid[i][j];
        return sum;
    }
}