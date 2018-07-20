class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(),candies.end());
        set<int> unique;
        for(int i:candies)
            if(unique.count(i)==0)
                unique.insert(i);
        int kind=candies.size()/2;
        int size=unique.size();
        if(kind>size) return size;
        else return kind;
    }
};