class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n=d.size();
     
        int c=0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)d[i]++;
            if(c>0)
                d[i]+=c;
            if(d[i]>9){
                c=1;
            
                if(i!=0)
                d[i]=d[i]%10;
            }
            else
                c=0;
        }
        if(d[0]>9)
        {
            d[0]=1;
            d.push_back(0);
        }

        
       return d;
        
    }
};