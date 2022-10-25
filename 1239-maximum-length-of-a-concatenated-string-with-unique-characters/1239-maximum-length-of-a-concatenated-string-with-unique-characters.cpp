class Solution {
public:
    void fun(int idx,vector<string>& arr,vector<string>& temp,int& maxlength)
    {
        if(idx==arr.size())
        {
            string s1="";
            for(int i=0;i<temp.size();i++)
            {
                s1+=temp[i];
            }
            int freq[26]={0};
            for(int i=0;i<s1.size();i++)
            {
                freq[s1[i]-'a']++;
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
                    return;
                }
            }
            maxlength=max(maxlength,cnt);
            return;
        }
        temp.push_back(arr[idx]);
        fun(idx+1,arr,temp,maxlength);
        temp.pop_back();
        fun(idx+1,arr,temp,maxlength);
    }
    int maxLength(vector<string>& arr) {
        vector<string> temp;
        int maxlength=0;
        fun(0,arr,temp,maxlength);
        return maxlength;
    }
};
// class Solution {
// public:
//     int findlen(int i,int n,string s,vector<string>& a)
//     {
//         if(i>n-1)
//         {
//             //s=s+a[i];
//             int len=s.size();
//             unordered_set<char>ss(s.begin(),s.end());
//          //   cout<<<<" "<<i<<" ";
//             // cout<<endl;
//             // for(auto j:ss)
//             //     cout<<j<<" ";
//             //cout<<ss.size()<<" ";
//             int sslen=ss.size();
//             cout<<s<<" "<<len<<","<<sslen<<"  ";
//             if(sslen==len)
//                 return len;
            
//                 return 0;
            
//         }
//        unordered_set<char>as(a[i].begin(),a[i].end());
//         int pick=0;
//         if(a[i].size()==as.size())
//          pick=findlen(i+1,n,s+a[i],a);
       
//         int notpick=findlen(i+1,n,s,a);
//         return max(pick,notpick);
//     }
//     int maxLength(vector<string>& arr) {
//         string s="";
//         int n=arr.size();
        
//         int x= findlen(0,n,s,arr);
//         // for(int i=0;i<n;i++)
//         //     cout<<dp[i]<<" ";
//         return x;
//     }
// };