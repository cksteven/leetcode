class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        int res[30010]={0};
        int count=0;
        for(int i:temperatures){
            while(!s.empty()&&i>s.top().first){
                res[s.top().second]=count-s.top().second;
                s.pop();
            }
            s.push(make_pair(i,count));
            count++;
        }
        return vector<int> (res,res+count);
    }
};