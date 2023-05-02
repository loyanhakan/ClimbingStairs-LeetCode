class Solution {
public:
    int climbStairs(int n) {
        

        if(n<=2) return n;
        int deger[46];
        deger[1]=1;
        deger[2]=2;
        for(int i=3; i<=n; i++)
        {
            deger[i]=(deger[i-1]+deger[i-2]);
        }
        return deger[n];


    }
};
