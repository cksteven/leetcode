class Solution {
public:
    // dp ~8ms
    int trap(vector<int>& height) {
        int sum=0,len=height.size();
        if(!len) return 0; // without this line: RE
        int maxr[len],maxl[len];
        maxr[0]=height[0];
        maxl[len-1]=height[len-1];
        for(int i=1;i<len;i++) maxr[i]=max(maxr[i-1],height[i]);
        for(int i=len-2;i>=0;i--) maxl[i]=max(maxl[i+1],height[i]);
        for(int i=0;i<len;i++) sum+=min(maxl[i],maxr[i])-height[i];
        return sum;
    }
    /** brute force ~85ms
    
    int trap(vector<int>& height) {
        int sum=0,len=height.size();
        for(int i=0;i<len;i++){
            int maxl=height[i],maxr=height[i],temp=i;
            while(temp-->0) maxl=max(maxl,height[temp]);
            temp=i;
            while(++temp<len) maxr=max(maxr,height[temp]);
            sum+=min(maxl,maxr)-height[i];
        }
        return sum;
    }
    
    **/
};
// https://leetcode.com/problems/trapping-rain-water/solution/
