class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for (auto const &i:points)
            for (auto const &j:points)
                for (auto const &k:points)
                    res=max(res,0.5*(i[0]*j[1]+j[0]*k[1]+k[0]*i[1]-i[1]*j[0]-j[1]*k[0]-k[1]*i[0]));
        return res;
    }
};
// brute force O(N^3) && shoelace formula
// https://leetcode.com/problems/largest-triangle-area/solution/