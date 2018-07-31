class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> s;
        int res=0,len=heights.size(),i=0;            
        while(i<len){
            if(s.empty()||heights[i]>=heights[s.top()])
                s.push(i++);
            else{
                int top=s.top();
                s.pop();
                res=max(res, heights[top]*( s.empty() ? i : i-s.top()-1 ) );
            }
        }
        return res;
    }
};
