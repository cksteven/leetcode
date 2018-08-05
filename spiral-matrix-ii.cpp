class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        if(!n) return res;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++) temp.push_back(0);
            res.push_back(temp);
        }
        int turn=0,tot=n*n,i=0,j=0;
        int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
        for(int count=1;count<=tot;count++){
            res[i][j]=count;
            switch(turn%4){
                case 0:
                    if(j==n-1-turn/4) turn++;
                    break;
                case 1:
                    if(i==n-1-turn/4) turn++;
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
