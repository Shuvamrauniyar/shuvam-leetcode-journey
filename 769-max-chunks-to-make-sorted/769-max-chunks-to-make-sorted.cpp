class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        int n=a.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>maxi)
                maxi=a[i];
                if(maxi==i)
                  count++;
               // cout<<maxi<<endl;
            
            // else if(count>0);
            // else
            //     count=0;
        }
       // if(a[n-1]<a[])
        //count++;
        return count;
    }
};