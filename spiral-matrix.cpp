class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int rlen=matrix.size();
        if(!rlen) return res;
        int clen=matrix[0].size();
        int turn=0,tot=rlen*clen,i=0,j=0;
        int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
        for(int count=0;count<tot;count++){
            res.push_back(matrix[i][j]);
            switch(turn%4){
                case 0:
                    if(j==clen-1-turn/4) turn++;
                    break;
                case 1:
                    if(i==rlen-1-turn/4) turn++;
                    break;
                case 2:
                    if(j==turn/4) turn++;
                    break;
                case 3:
                    if(i==1+turn/4) turn++;
                    break;
            }
            i+=dy[turn%4];
            j+=dx[turn%4];
        }
        return res;
    }
};
