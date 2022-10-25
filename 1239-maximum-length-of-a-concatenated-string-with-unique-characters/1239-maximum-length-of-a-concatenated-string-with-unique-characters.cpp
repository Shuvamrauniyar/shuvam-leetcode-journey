class Solution {
public:
    int findlen(int i,int n,string s,vector<string>& a)
    {
        if(i>n-1)
        {
           // s=s+a[i];
            int len=s.size();
            int freq[26]={0};
            for(int j=0;j<len;j++)
            {
                freq[s[j]-'a']++;
            }
            int cnt=0;
            for(int i=0;i<26;i++)
            {
                if(freq[i]==1)
                {
                    cnt++;
                }
                else if(freq[i]>1)
                {
                    cnt=0;
                    return 0;
                }
            }
             return len;
            
        }
       
        
        int pick=findlen(i+1,n,s+a[i],a);
       
        int notpick=findlen(i+1,n,s,a);
        return max(pick,notpick);
    }
    int maxLength(vector<string>& arr) {
        string s="";
        int n=arr.size();
        
        
        // for(int i=0;i<n;i++)
        //     cout<<dp[i]<<" ";
        return findlen(0,n,s,arr);
    }
};