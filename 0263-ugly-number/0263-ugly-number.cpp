class Solution
{
    public:
bool isUgly(int n)
{
    for(int i=2;i<6&&n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
        }
    }
    return n==1;
}
};
/*
    public:
        int checkprime(int n)
        {

             for(int i=2;i<=n/2;i++)
                 if(n%i==0)
                     return 0;
            return 1;
            
        }
    bool isUgly(int n)
    {

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0 && i != 2 && i != 5 && i != 3)
            {
                if(checkprime(i))
                return false;
            }
        }
        return true;
    }
*/