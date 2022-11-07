class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        int count=0;
        while(x)
        {
            int mask=x&(-x);
            if(mask)
                count++;
            x=x^mask;
        }
        return count;
    }
};