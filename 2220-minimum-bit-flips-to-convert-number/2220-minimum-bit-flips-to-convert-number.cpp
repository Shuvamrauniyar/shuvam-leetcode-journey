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
            // mask=~mask; /you can also do it 
            // x=x&mask;
            //or you can also do the following
            x=x^mask;
        }
        return count;
    }
};