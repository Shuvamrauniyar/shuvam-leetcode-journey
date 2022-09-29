class Solution {
public:
    
    bool cmp(pair<int,int>&p1,pair<int,int>p2)
    {
        return p1.second<p2.second;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector <int>ans;
        int n=arr.size();
        if(x<arr[0])
        {
            for(int i=0;i<k;i++)
                ans.push_back(arr[i]);
            return ans;
        }
         if(x>arr[n-1])
        {
            for(int i=n-1;i>=(n-k);i--)
                ans.push_back(arr[i]);
             sort(ans.begin(),ans.end());
            return ans;
        }
         multimap<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({abs(arr[i]-x),i});
        }
        int count=1;
        for(auto i:mp)
        {
            if(count>k)break;
            ans.push_back(arr[i.second]);
            count++;
        }
        sort(ans.begin(),ans.end());
        
       // sort(mp.begin(),mp.end(),cmp);
        return ans;
    }
};