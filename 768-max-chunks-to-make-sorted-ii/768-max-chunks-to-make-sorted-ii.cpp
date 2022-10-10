class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        stack<int>s;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            int largest=a[i];
            
            while(!s.empty()&&a[i]<s.top())
            {
                largest=max(largest,s.top());
                    s.pop();
            }
            s.push(largest);
        }
        return s.size();
    }
};