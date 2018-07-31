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
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>> heights;
        for(int i=0;i<matrix.size();i++){
            vector<int> temp;
            int t;
            for(int j=0;j<matrix[0].size();j++){
                t=matrix[i][j]-'0';
                if(t>0&&(i>0)) t+=heights[i-1][j];
                temp.push_back(t);
            }
            heights.push_back(temp);
        }
        int res=0;
        for(int i=0;i<heights.size();i++)
            res=max(res,largestRectangleArea(heights[i]));
        return res;
    }
};
