class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>indegree(n,0);
        for(int i=0;i<pre.size();i++)
        {
            indegree[pre[i][0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            // for(int j=0;j<pre[i].size();j++)
            // {
                if(indegree[i]==0)
                    q.push(i);
            //}
        }
        vector<int>topo;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(int i=0;i<pre.size();i++)
            {
                if(pre[i][1]==node)
                {
                    indegree[pre[i][0]]--;
                if(indegree[pre[i][0]]==0)
                    q.push(pre[i][0]);       
                }
            }
        }
            if(topo.size()!=n)
                return false;
            return true;
        
        
        
    }
};