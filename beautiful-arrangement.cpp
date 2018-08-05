class Solution {
public:
    int count;
    int n;
    void backtrack(int pos,int* used){
        if(pos>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){ // test each number
            if(!used[i]&&(pos%i==0||i%pos==0)){
                used[i]=1;
                backtrack(pos+1,used);
                used[i]=0;
            }
        }
    }
    int countArrangement(int N) {
        count=0;
        n=N;
        int temp[n+1]={0};
        backtrack(1,temp); // use new int[n+1] may cause WA
        return count;
    }
};
// https://leetcode.com/problems/beautiful-arrangement/discuss/99707/Java-Solution-Backtracking
