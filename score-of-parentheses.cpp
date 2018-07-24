class Solution {
public:
    // int getLevelSum(vector<int> &v){
    //     int sum=0;
    //     for(int i:v) sum+=i;
    //     v=vector<int>();
    //     return sum;
    // }
    // int scoreOfParentheses(string S) {
    //     map<int, vector<int>> res;
    //     stack<int> s;
    //     for(char ch:S){
    //         if(ch=='(') s.push(1);
    //         else{
    //             int level=s.size();
    //             int sum=1;
    //             if(res.count(level+1)&&!res[level+1].empty())
    //                 sum=2*getLevelSum(res[level+1]);
    //             if(!res.count(level)) res[level]=vector<int> {sum};
    //             else res[level].push_back(sum);
    //             s.pop();
    //         }
    //     }
    //     return getLevelSum(res[1]);
    // }
    int scoreOfParentheses(string S) {
        stack<int> s;
        s.push(0);
        for(char ch:S){
            if(ch=='(') s.push(0);
            else{
                int sum=s.top();
                s.pop();
                if(sum) sum*=2;
                else sum=1;
                s.top()+=sum;
            }
        }
        return s.top();
    }
};