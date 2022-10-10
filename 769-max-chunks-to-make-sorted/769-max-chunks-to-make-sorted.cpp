class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        int n=a.size();
        int count=0;
        int maxi=0;
       // if(a.size()==1)return 1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>maxi){
                maxi=a[i];
            }
                if(i==maxi)
                  count++;
              
        }
        return count;
    }
};