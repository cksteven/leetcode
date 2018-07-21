class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i=1;i<=n;i++){
            int a=i%3;
            int b=i%5;
            if(a==0&&b==0){
                res.push_back("FizzBuzz");
                continue;
            }
            if(a==0){
                res.push_back("Fizz");
                continue;
            }
            if(b==0){
                res.push_back("Buzz");
                continue;
            }
            res.push_back(to_string(i));
        }
        return res;
    }
};