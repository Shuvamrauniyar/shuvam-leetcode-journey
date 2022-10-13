class Solution {
public:
    int minimumSum(int n) {
        int d[4];
        int i=0;
        while(n)
        {
            d[i++]=n%10;
            n=n/10;
        }
        sort(d,d+4);
        return 10*(d[0]+d[1])+d[2]+d[3]; //(if there is 1092 then our ans will be                        (02+19) which is also same as 0*10 +2+1*10 +9  => 10*(0+1)+2+9
    }
};