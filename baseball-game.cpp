class Solution {
public:
    bool isIntStr(string s){
        return s[0]=='-'||(s[0]>='0'&&s[0]<='9');
    }
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(string s:ops){
            if(isIntStr(s)){
                v.push_back(stoi(s));
            }else{
                if(s[0]=='+'){
                    v.push_back(v[v.size()-1]+v[v.size()-2]);
                }else{
                    if(s[0]=='D'){
                        v.push_back(v[v.size()-1]*2);
                    }else{
                        v.pop_back();
                    }
                }
            }
        }
        int sum=0;
        for(int i:v)
            sum+=i;
        return sum;
    }
};