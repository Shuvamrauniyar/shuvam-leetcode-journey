class Solution {
public:
    vector<int> searchRange(vector<int>& a, int x) {
        
        int n=a.size();
         int mid,low=0,high=n-1;
	    int idx1=-1,idx2=-1;
	    while(low<=high)
	    {
	        mid=(low+high)/2;
	        if(a[mid]==x)
	    {
	        idx1=mid;
	        high=mid-1;
	    }
	    else if(x<a[mid])
	    high=mid-1;
	    else
	    low=mid+1;
	    }
	    low=0,high=n-1;
	    while(low<=high)
	    {
	        mid=(low+high)/2;
	        if(a[mid]==x)
	    {
	        idx2=mid;
	        low=mid+1;
	    }
	    else if(x<a[mid])
	    high=mid-1;
	    else
	    low=mid+1;
	    }
	 
	   vector<int>ans;
	   
	       if(idx1!=-1&&idx2!=-1)
	       {
	           ans.push_back(idx1);
	           ans.push_back(idx2);
               return ans;
           }
        return {-1,-1};
	    
    }
};