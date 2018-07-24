class Solution {
public:
    set<int> primes {2,3,5,7,11,13,17,19,23,29,31};
    int countBit(int n){
        int res=0;
        while(n){
            res+=n&1;
            n>>=1;
        }
        return res;
    }
    int countPrimeSetBits(int L, int R) {
        int res=0;
        for(int i=L;i<=R;i++)
            if(primes.count(countBit(i))) res++;
        return res;
    }
};